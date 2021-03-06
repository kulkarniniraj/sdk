namespace gfx3D::meshes;

/****************************************************************************
   ECERE Runtime Library

   Copyright (c) 2001 Jerome Jacovella-St-Louis
   All Rights Reserved.
   
   skybox.ec - SkyBox 3D Model
****************************************************************************/
import "Display"

static char * faceNames[] = { "up", "fr", "dn", "bk", "rt", "lf" };

public class SkyBox : Object
{
public:
   bool Create(DisplaySystem displaySystem)
   {
      bool result = false;
      if(this)
      {
         InitializeMesh(displaySystem);

         if(mesh.Allocate({vertices = true, texCoords1 = true }, 24, displaySystem))
         {
            PrimitiveGroup group;
            Vector3Df vertices[24] =
            {
               { -(float)size.x/2,-(float)size.y/2,-(float)size.z/2 },
               {  (float)size.x/2,-(float)size.y/2,-(float)size.z/2 },
               {  (float)size.x/2, (float)size.y/2,-(float)size.z/2 },
               { -(float)size.x/2, (float)size.y/2,-(float)size.z/2 },
               { -(float)size.x/2,-(float)size.y/2, (float)size.z/2 },
               {  (float)size.x/2,-(float)size.y/2, (float)size.z/2 },
               {  (float)size.x/2, (float)size.y/2, (float)size.z/2 },
               { -(float)size.x/2, (float)size.y/2, (float)size.z/2 },

               { -(float)size.x/2,-(float)size.y/2,-(float)size.z/2 },
               {  (float)size.x/2,-(float)size.y/2,-(float)size.z/2 },
               {  (float)size.x/2, (float)size.y/2,-(float)size.z/2 },
               { -(float)size.x/2, (float)size.y/2,-(float)size.z/2 },
               { -(float)size.x/2,-(float)size.y/2, (float)size.z/2 },
               {  (float)size.x/2,-(float)size.y/2, (float)size.z/2 },
               {  (float)size.x/2, (float)size.y/2, (float)size.z/2 },
               { -(float)size.x/2, (float)size.y/2, (float)size.z/2 },

               { -(float)size.x/2,-(float)size.y/2,-(float)size.z/2 },
               {  (float)size.x/2,-(float)size.y/2,-(float)size.z/2 },
               {  (float)size.x/2, (float)size.y/2,-(float)size.z/2 },
               { -(float)size.x/2, (float)size.y/2,-(float)size.z/2 },
               { -(float)size.x/2,-(float)size.y/2, (float)size.z/2 },
               {  (float)size.x/2,-(float)size.y/2, (float)size.z/2 },
               {  (float)size.x/2, (float)size.y/2, (float)size.z/2 },
               { -(float)size.x/2, (float)size.y/2, (float)size.z/2 }
            };
            Pointf texCoords[24] =
            {
               { 1, 0 }, { 0, 0 }, { 0, 1 }, { 1, 1 },
               { 0, 0 }, { 1, 0 }, { 1, 1 }, { 0, 1 },
               { 0, 0 }, { 1, 0 }, { 1, 1 }, { 0, 1 },
               { 1, 0 }, { 0, 0 }, { 0, 1 }, { 1, 1 },
               { 0, 0 }, { 1, 0 }, { 1, 1 }, { 0, 1 },
               { 0, 1 }, { 1, 1 }, { 1, 0 }, { 0, 0 }
            };

            uint16 indices[6][4] =
            {
               // up, front, down, back, right, left
               /*
               { 20,21,16,17 },
               { 7,6,4,5 }, 
               { 19,18,23,22 }, 
               { 2,3,1,0 }, 
               { 14,10,13,9 },
               { 11,15,8,12 }
               */
               { 20,21,17,16 },
               { 7,6,5,4 }, 
               { 19,18,22,23 }, 
               { 2,3,0,1 }, 
               { 14,10,9,13 },
               { 11,15,12,8 }
            };

            int c;

            CopyBytes(mesh.vertices, vertices, sizeof(vertices));
            CopyBytes(mesh.texCoords, texCoords, sizeof(texCoords));

            for(c = 0; c<6; c++)
            {
               Material material;
               char name[20];
               sprintf(name, "SKYBOX %s", faceNames[c]);
               material = displaySystem.AddNamedMaterial(name);
               if(material)
               {
                  char name[256];
                  sprintf(name, "%s/%s.%s", folder ? folder : ":skycube", faceNames[c], extension ? extension : "pcx");
                  material.flags = { noFog = true };
                  material.opacity = 1;
                  material.emissive.r = material.emissive.g = material.emissive.b = 1;
                  material.baseMap = Bitmap { };
                  material.baseMap.LoadMipMaps(name, null, displaySystem);
                  displaySystem.AddTexture(name, material.baseMap);
               }
               group = mesh.AddPrimitiveGroup(triFan, 4);
               //group = mesh.AddPrimitiveGroup(quads, sizeof(indices[c]) / sizeof(uint16));
               if(group)
               {
                  group.material = material;
                  CopyBytes(group.indices, indices[c], sizeof(indices[c]));
                  mesh.UnlockPrimitiveGroup(group);
               }
            }
            result = true;
            mesh.Unlock(0);
         }
         SetMinMaxRadius(true);
      }
      return result;
   }

   void Render(Camera camera, Display display)
   {
      if(this)
      {
         display.depthTest = false;
         display.depthWrite = false;

         flags.viewSpace = true;
         flags.transform = true;
         flags.root = true;

         // TODO: Not working...
         // transform.orientation.Inverse(camera.cOrientation);
         {
            Quaternion iquat;
            iquat.Inverse(camera.cOrientation);
            transform.orientation = iquat;
         }         

         UpdateTransform();
         display.DrawObject(this);

         display.depthWrite = true;
         display.depthTest = true;
      }
   }

   property Vector3Df size { set { size = value; } };
   property char * folder { set { folder = value; } };
   property char * extension { set { extension = value; } };

private:
   SkyBox()
   {
      size = { 10000,10000,10000 };
      folder = ":skycube";
      extension = "pcx";   
   }

   Vector3Df size;
   char * folder, * extension;
}

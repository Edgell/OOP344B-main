#include <fstream>

struct DataBank
   {
   int a[10];
   float b[3];
   bool c;
   DataBank() : c(true)
      {
      int i = 10;
      while(i--)
         a[i] = i;
      i = 3;
      while(i--)
         b[i] = i;
      }
   };

int main()
   {
   std::fstream a("Source.cpp", std::ios::in | std::ios::binary);
   if(a)
      {
      a.seekg(10, std::ios::beg);
      a.seekg(-5, std::ios::cur);
      a.seekg(0, std::ios::end);

      int size = a.tellg();

      char* data = new char[size];
      a.seekg(0, std::ios::beg);
      a.read(data, size);

      int derp = 0;

      a.close();

      std::fstream b("data.dat", std::ios::binary | std::ios::out);
      DataBank db;
      db.c = false;
      db.a[3] = 100;
      if(b)
         {
         b.write((char*)&db, sizeof(db));
         b.close();
         }

      DataBank db2;

      std::fstream c("data.dat", std::ios::binary | std::ios::in);
      if(c)
         {
         c.read((char*)&db2, sizeof(db2));
         c.close();
         }
      int lllll = 0;
      }

   }
//comments herp derp
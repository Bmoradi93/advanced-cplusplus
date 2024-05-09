/**
*/

#include <iostream>
#include <vector>
#include <cstring> // for std::strlen and std::strcpy

class String
{
   public:
   // constructor
   String(const char* p = nullptr)
   {
      if(p)
      {
         data = new char[strlen(p) + 1];
         strcpy(data, p);
      }
      else
      {
         data = new char[1];
         data[0] = '\0';
      }
   }

   // copy constructor
   String (const String& other)
   : data(new char(strlen(other.data) + 1))
   {
      strcpy(data, other.data);
      std::cout << "Copy Constructor is called!" << std::endl;
   }

   ~String()
   {
      delete[] data;
   }

   void display()
   {
      std::cout << data << std::endl;
   }
   private:

   char* data; 

};

int main(int argc, char** argv)
{
   // 
   String s1("Hello World!");
   s1.display();

   String s2 = s1;
   s2.display();

   String s3(s2);

   return 0;
}
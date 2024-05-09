/**
*/

#include <iostream>
#include <functional>

class Print
{
   public:

   void display(int x)
   {
      std::cout << "int x: " << x << std::endl;
   }

   void display(double y)
   {
      std::cout << "double y: " << y << std::endl;
   }

   private:
};

int main(int argc, char** argv)
{
   Print p;
   p.display(5);
   p.display(3.12);
   return 0;
}
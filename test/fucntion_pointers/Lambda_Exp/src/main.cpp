/**
*/

#include <iostream>
#include <functional>

int main(int argc, char** argv)
{
   int a = 10;
   auto add = [&a](int x, int y) -> int
   {
      a = 20;
      return (x + y + a);
   };

   std::cout << add(5, 6) << std::endl;
   std::cout << a << std::endl;
}
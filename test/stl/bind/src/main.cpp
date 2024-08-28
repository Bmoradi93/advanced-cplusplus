/**
*/

#include <iostream>
#include <functional>

template <typename T>
void print(T x, T y, T z)
{
   std::cout << x << " " << y << " " << z << std::endl;
}

// template <typename T>
class Shape
{
   public:
   void circle(int min_rad, int max_rad)
   {
      std::cout << "I'm a circle!" << std::endl;
   }
   
};

int main(int argc, char** argv)
{
   auto callable_obj = std::bind(print<int>, 1, 2, std::placeholders::_1);
   callable_obj(3);

   auto shape_obj = std::bind(&Shape::circle, &Shape, std::placeholders::_1);

   shape_obj(10);
   return 0;
}
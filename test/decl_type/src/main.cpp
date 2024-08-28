#include <iostream>
#include <vector>
#include <typeinfo>

int main(int argc, char** argv)
{
   // decltype(expression)
   int x = 5;
   decltype(x) y = 10;  // y is of type int, because x is int

   std::vector<int> v;
   decltype(v.begin()) it = v.begin();  // it is std::vector<int>::iterator

   auto z = 3.14;
   decltype(z) w;  // w is of type double, because z is double

   // typeid(expression)
   std::vector<int> vec = {1,2,3,4,5,6};
   std::cout << "Type of vec: " << typeid(vec).name() << std::endl;

   int a = 0;
   std::cout << "Type of a: " << typeid(a).name() << std::endl;

   double b = 0.0;
   std::cout << "Type of b: " << typeid(b).name() << std::endl;

   // Comparing types
   if (typeid(a) == typeid(int)) {
      std::cout << "a is an integer" << std::endl;
   }

   return 0;
}


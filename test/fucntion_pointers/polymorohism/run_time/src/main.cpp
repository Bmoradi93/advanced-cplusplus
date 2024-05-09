/**
*/

#include <iostream>
#include <functional>

class Base
{
   public:
   virtual void display()
   {
      std::cout << "Base" << std::endl;
   }

};

class Derived : public Base
{
   void display() override 
   {
      std::cout << "Derived" << std::endl;
   }
};
int main(int argc, char** argv)
{
   Base* base;
   Derived derived;

   base = &derived;

   base->display();
   return 0;
}
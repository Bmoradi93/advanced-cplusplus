/**
*/

#include <iostream>
#include <functional>

class Base // abstract class
{
   public:
   virtual void display() const = 0; // this pure virtual function must be overridden by the derived classes

   virtual ~Base()
   {

   }

};

class Derived : public Base
{
   void display() const override 
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
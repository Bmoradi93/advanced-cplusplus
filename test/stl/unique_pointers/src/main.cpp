/**
*/

#include <iostream>
#include <memory>

class Incrementer
{
   public:
   Incrementer(int x)
   : num_(x)
   {
      std::cout << "Assigned SRC: " << num_ << std::endl;
   }

   ~Incrementer()
   {
      std::cout << "Deleted SRC: " << num_ << std::endl;
   }

   int getNum()
   {
      return num_;
   }

   void setNum(int num)
   {
      num_ = num;
   }

   private:
   int num_{0};
   
};

int main(int argc, char** argv)
{
   std::unique_ptr<Incrementer> inc = std::make_unique<Incrementer>(10);
   std::unique_ptr<Incrementer> inc2 = std::move(inc);

   std::cout << inc2->getNum() << std::endl;
   // std::cout << inc->getNum() << std::endl;

   if(!inc)
   {
      std::cout << "inc is null" << std::endl;
   }

   std::unique_ptr<int> x = std::make_unique<int>(20);
   std::cout << *x << std::endl;
   return 0;
}
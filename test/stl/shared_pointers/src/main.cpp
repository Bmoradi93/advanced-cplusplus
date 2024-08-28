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
   std::shared_ptr<Incrementer> ptr(new Incrementer(10)); // or : std::shared_ptr<Incrementer> ptr = std::make_shared<Incrementer>(10);
   std::cout << "count: " << ptr.use_count() << std::endl;

   {
      std::shared_ptr<Incrementer> ptr2 = ptr;
      std::cout << "count: " << ptr.use_count() << std::endl;
   }

   std::cout << "count: " << ptr.use_count() << std::endl;
   return 0;
}
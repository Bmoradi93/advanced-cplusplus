#include <iostream>

class Incrementer
{
   public:
   Incrementer(int start)
   : num_(start) {}

   int operator() (int addend)
   {
      num_ += addend;
      return num_;
   }

   std::string operator() (std::string s1, std::string s2)
   {
      str_ =  s1 + s2;

      return str_;
   }

   // private:
   int num_;

   std::string str_;
};

int main(int argc, char** argv)
{
   Incrementer inc(10);
   std::cout << inc(10) << std::endl;
   std::cout << inc.num_ << std::endl;
   std::cout << inc("one", "two") << std::endl;
   std::cout << inc.str_ << std::endl;

   return 0;
}
/**
*/

#include <iostream>
#include <functional>


void ExecOp(const std::function<void()>& func)
{
   func();
}

void greet()
{
   std::cout << "Hello, world!" << std::endl;
}

void goodbye()
{
   std::cout << "goodbye world" << std::endl;
}

int main(int argc, char** argv)
{
   ExecOp(greet);
   return 0;
}
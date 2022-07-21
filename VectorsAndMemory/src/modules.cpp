#include <iostream>
#include <vector>
#include "../include/modules.hpp"

namespace ns
{
    myClass::myClass()
    {
        std::cout <<"Constructiong the class..." <<std::endl;
        
    }

    myClass::~myClass()
    {
        std::cout <<"Distructiong the class..." <<std::endl;
    }
}
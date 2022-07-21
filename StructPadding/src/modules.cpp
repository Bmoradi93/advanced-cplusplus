#include <iostream>
#include <fstream>
#include "../include/modules.hpp"

namespace ns
{
    void myClass::getSize(person p)
    {
        p.age = 29;
        p.weight = 12.2;
        p.name[0] = 'm';
        std::cout << sizeof(p) << std::endl;

    }

    myClass::myClass()
    {
        std::cout << "The class is constructed!" << std::endl;
    }

    myClass::~myClass()
    {
        std::cout << "The class is distructed!" << std::endl;
    }
}

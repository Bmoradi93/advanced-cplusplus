#include <iostream>
#include <fstream>
#include <string> 

#pragma once

namespace ns
{
    struct Person
    {
        char name [50];
        int age;
        double height;
    };
    
    class myClass
    {
        public:
            myClass();
            void writeToBinFile(Person p);
            void readFromBinFile(std::string file_name);
            ~myClass();
    };
}
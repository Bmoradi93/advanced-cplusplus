#include <iostream>
#include <fstream>

#pragma once
namespace ns
{
    #pragma pack(push, 1)
    struct person
    {
        char name[50];
        int age;
        double weight;
    };
    #pragma pack(pop)

    
    class myClass
    {
        public:
            void getSize(person p);
            myClass();
            ~myClass();
    };
}
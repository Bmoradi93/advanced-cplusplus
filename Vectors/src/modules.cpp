#include <iostream>
#include <vector>
#include <string> 
#include "../include/modules.hpp"


namespace ns
{
    myClass::myClass()
    {
        std::cout << "Constructing the class!" << std::endl;
        std::vector<std::string> strings;
        strings.push_back("One");
        strings.push_back("Two");
        strings.push_back("Three");

        // Iterating over the vector

        std::cout << "Iterating using FOR loop" << std::endl;

        for (int i = 0; i < strings.size(); i++)
        {
            std::cout << strings[i] << std::endl;
        }

        std::cout << "Iterating using iterator loop" << std::endl;

        for (auto i = strings.begin(); i != strings.end(); i++)
        {
            std::cout << *i << std::endl;
        }

        std::cout << "Iterating using iterator" << std::endl;

        for (std::vector<std::string>::iterator i = strings.begin(); i != strings.end(); i++)
        {
            std::cout << *i << std::endl;
        }


    }

    myClass::~myClass()
    {
        std::cout << "Distructing the class!" << std::endl;
    }
}
#include <iostream>
#include <fstream>
#include <sstream>
#include "../include/modules.hpp"

namespace ns
{
    myClass::myClass()
    {
        std::cout << "The class is constructed!" << std::endl;
    }

    myClass::~myClass()
    {
        std::cout << "The class is distructed!" << std::endl;
    }

    void myClass::readTextFile(std::string inFileName)
    {
        std::ifstream inFile;
        inFile.open(inFileName);

        if (inFile.is_open())
        {
            std::string line;

            while (!inFile.eof())
            {
                std::getline(inFile, line);
                std::cout << line << std::endl;
            }
        inFile.close();
        }
        else
        {
            std::cout << "Cannot open the file!";
        }

    }
}
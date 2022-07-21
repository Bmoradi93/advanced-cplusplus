#include <iostream>
#include <fstream>
#include <string> 
#include "../include/modules.hpp"

namespace ns
{
    struct Data {
	char name[100];
	int age;
	double height;
};
    myClass::myClass()
    {
        std::cout << "The class is constructed!" << std::endl;
    }

    myClass::~myClass()
    {
        std::cout << "The class is distructed!" << std::endl;
    }

    void myClass::writeToBinFile(Person p)
    {
        std::cout << "Writing to a binary file" << std::endl;
        std::string file_name = "data.bin";
        p = {"Behnam", 29, 175};

        std::ofstream output;

        output.open(file_name);

        if (!output.is_open())
        {
            std::cout << "Could not create/open the file!" << std::endl;
        }

        output.write((char *) &p, sizeof(p));

        if (!output)
        {
            std::cout << "Could not write to the file!" <<std::endl;
        }
        output.close();
    }

    void myClass::readFromBinFile(std::string file_name)
    {
        std::cout << "Reading from a binary file" << std::endl;
        // std::string file_name = "data.bin";
        std::ifstream input;
        Person u;

        input.open(file_name);
        input.read((char *) &u, sizeof(u));

        if (!input)
        {
            std::cout << "Could not read the data!" << std::endl;
        }
        std::cout << u.name << std::endl;
    }
}

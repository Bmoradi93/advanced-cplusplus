#include <iostream>
#include <fstream>
#include <string>
#include "../include/modules.hpp"

namespace ns
{
    void myClass::writeToFile(std::string st)
    {
        std::ofstream outFile;
        std::string outputFileName = "text.txt";

        outFile.open(outputFileName);

        if(outFile.is_open()) 
        {
            outFile << st << std::endl;
            outFile.close();
        }
        else
        {
            std::cout << "Could not create file: " << outputFileName << std::endl;
        }
    }
}
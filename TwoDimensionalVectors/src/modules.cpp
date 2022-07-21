#include <iostream>
#include <vector>
#include "../include/modules.hpp"


namespace ns
{
    myClass::myClass()
    {
        std::cout << "Constructing the class..." << std::endl;
    }

    void myClass::create2DArray(uint8_t num_rowa, uint8_t num_cols)
    {
        std::cout << "Creating the 2D array of integers" << std::endl;
        std::vector< std::vector<int> >grid(3, std::vector<int>(4, 7));

        for (int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < grid[row].size(); col++)
            {
                std::cout << grid[row][col] << std::flush;
            }
            std::cout << std::endl;
        }
    }

    myClass::~myClass()
    {
        std::cout << "Distructing the class..." << std::endl;

    }
}
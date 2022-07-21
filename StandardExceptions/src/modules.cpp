#include <iostream>
#include "../include/modules.hpp"

namespace cgw
{
    CanGoWrong::CanGoWrong()
    {
        char *pMemory = new char[99];
		delete[] pMemory;
    }
}
#include <iostream>
#include <exception>
#include "../include/modules.hpp"

namespace cse
{
    void myClass::canGowrong()
    {
        bool error1Detected = true;
        bool error2Detected = false;

        if (error1Detected) {
            throw std::bad_alloc();
        }

        if (error2Detected) {
            throw std::exception();
        }
    }
}
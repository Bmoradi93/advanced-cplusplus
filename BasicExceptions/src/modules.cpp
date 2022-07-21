#include <iostream>
#include <string>

#include "../include/modules.hpp"

namespace Exceptions
{
    void myClass::mightGoWrong()
    {
        bool error1 = true;
        bool error2 = false;

        if(error1) {
            // throw 8;
            throw "Something went wrong.";
        }

        if(error2) {
            throw std::string("Something else went wrong.");
        }
    }

    void myClass::usesMightGoWrong()
    {
        myClass::mightGoWrong();
    }
}
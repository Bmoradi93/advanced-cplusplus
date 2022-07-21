#include <iostream>
#include <exception>
#include "../include/modules.hpp"


namespace ce
{
    const char* myException:: what() const throw()
    {
        return "Something bad happened!";
    }

    void Test::goesWrong()
    {
        throw myException();
    }

}
#include <iostream>
#include <exception>

#pragma once

namespace ce
{
    class myException: public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class Test
    {
        public:
            void goesWrong();
    };
}
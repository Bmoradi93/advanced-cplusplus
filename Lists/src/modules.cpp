#include <iostream>
#include <list>
#include "../include/modules.hpp"

namespace ns
{
    myClass::myClass()
    {
        std::cout << "Constructing the class..." << std::endl;
    }

    myClass::~myClass()
    {
        std::cout << "Distructing the class..." << std::endl;
    }

    void myClass::createList()
    {
        std::list<int> numbers;

        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_front(0);

        for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
        {
            std::cout << *it << ":" << &it << std::endl;
        }
    }

    void myClass::eraseElement(std::list<int> input_list)
    {
        std::cout << "Before erasing..." <<std::endl;
        for (std::list<int>::iterator it = input_list.begin(); it != input_list.end(); it++)
        {
            std::cout << *it << std::endl;
        }

        std::list<int>::iterator it = input_list.begin();
        while (it != input_list.end())
        {
            if (*it == 1)
            {
                it = input_list.erase(it);
            }
            it++;
        }

        std::cout << "After erasing..." <<std::endl;

        for (std::list<int>::iterator it = input_list.begin(); it != input_list.end(); it++)
        {
            std::cout << *it << std::endl;
        }
    }
}
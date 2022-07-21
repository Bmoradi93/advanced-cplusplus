#include <iostream>
#include <map>
#include <string>
#include "../include/modules.hpp"


namespace ns
{
    myClass::myClass()
    {
        std::cout << "Constructing the class ..." << std::endl;
    }

    myClass::~myClass()
    {
        std::cout << "Distructing the class ..." << std::endl;
    }

    void myClass::createMap()
    {
        std::map<std::string, int> ages;

        ages["Mike"] = 20;
        ages["Raj"] = 21;
        ages["Vicky"] = 24;

        std::cout << ages["Mike"] << std::endl;

        for (std::map<std::string, int>::iterator it = ages.begin(); it != ages.end(); it++)
        {
            std::cout << it->first << ": " << it->second << std::endl;
        }    

    }

    void myClass::findElement(std::map<std::string, int> mp,std::string st)
    {
        if(mp.find(st) != mp.end())
        {
            std::cout << "The element is found!" <<std::endl;
        }
        else
        {
            std::cout << "The element is NOT found!" <<std::endl;
        }
    }

    void myClass:: addPairToMap(std::map<std::string, int> mp ,std::pair<std::string, int> p)
    {
        std::cout << "Before the insertion..." << std::endl;

        for (std::map<std::string, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            std::cout << it->first << ": " << it->second << std::endl;
        }

        std::cout << "After the insertion..." << std::endl;
        mp.insert(p);
        for (std::map<std::string, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            std::cout << it->first << ": " << it->second << std::endl;
        }
    }
}
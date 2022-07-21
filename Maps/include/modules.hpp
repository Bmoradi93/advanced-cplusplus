#include <iostream>
#include <map>
#include <string>

#pragma once

namespace ns
{
    class myClass
    {
        public:
            myClass();
            ~myClass();
            void createMap();
            void findElement(std::map<std::string, int> mp,std::string st);
            void addPairToMap(std::map<std::string, int> mp ,std::pair<std::string, int> p);
    };
}
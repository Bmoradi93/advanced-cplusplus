#include <iostream>
#include <map>
#include <string>

#pragma once

namespace ns
{
    class Person
    {
        private:
            std::string name;
            int age;
        public:
            Person();
            Person(std::string name, int age);
            Person(const Person& other);
            void print();
    };
}
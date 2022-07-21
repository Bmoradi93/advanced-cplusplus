#include <iostream>
#include <map>
#include <string>
#include "../include/modules.hpp"

namespace ns
{
    Person::Person(): name(""), age(0)
    {

    }

    Person::Person(std::string name, int age): name(name), age(age)
    {

    }

    Person:: Person(const Person& other)
    {
        std::cout << "Copy Constructor running!" << std::endl;
        name = other.name;
        age = other.age;
    }

    void Person::print()
    {
        std::cout << name << ": " << age << std::endl;
    }
}
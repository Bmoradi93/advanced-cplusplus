/**
*/

#include <iostream>
#include <stdexcept>
#include <vector>

int main(int argc, char** argv)
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9};
    std::vector<int> d;

    // push and pop back
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(8);

    std::cout << "Back: " << v.back() << std::endl;
    std::cout << "Front: " << v.front() << std::endl;
    v.at(1) = 10;
    std::cout << "At: " << v.at(1) << std::endl;

    // size and capacity
    std::cout << "Size: " << v.size() << std::endl;
    std::cout << "Capacity: " << v.capacity() << std::endl;
    std::cout << "Empty: " << v.empty() << std::endl;
    std::cout << "Empty: " << d.empty() << std::endl;

    // resize and reverse
    v.resize(4);
    std::cout << "Resize: " << v.size() << std::endl;
    // std::cout << "Reverse: " << v.reverse() << std::endl;
    
    // iterators
    for (auto it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    for (auto x: v)
    {
        std::cout << x << std::endl;
    }

    int* p;
    *p = 10;

    std::cout << "p value: " << *p << std::endl;
    std::cout << "p address: " << &p << std::endl;
    return 0;
}
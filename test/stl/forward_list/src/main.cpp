/**
*/

#include <iostream>
#include <stdexcept>
#include <vector>
#include <deque>
#include <forward_list>

int main(int argc, char** argv)
{
    std::forward_list<int> fl = {1,2,3,4,5,6,7,8,9};

    std::cout << "Publishing data" << std::endl;
    for (auto elem: fl)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    fl.push_front(20);

    std::cout << "Publishing data" << std::endl;
    for (auto elem: fl)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
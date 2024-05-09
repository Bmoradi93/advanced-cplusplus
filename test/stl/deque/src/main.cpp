/**
*/

#include <iostream>
#include <stdexcept>
#include <vector>
#include <deque>

int main(int argc, char** argv)
{
    std::deque<int> dq = {1,2,3,4,5,6,7,8,9};
    std::cout << "Publishing  data << " << std::endl;
    for(auto elem : dq)
    {
        std::cout << elem << " ";
        std::cout << std::endl;
    }

    // push back
    dq.push_back(1);
    std::cout << "Publishing data " << std::endl;
    for(auto elem : dq)
    {
        std::cout << elem << " ";
        std::cout << std::endl;
    }

    // push back
    dq.push_front(10);
    std::cout << "Publishing data " << std::endl;
    for(auto elem : dq)
    {
        std::cout << elem << " ";
        std::cout << std::endl;
    }

    // push back
    // dq.push_front(10);
    std::cout << "Publishing data << " << std::endl;
    std::cout << dq[0] << std::endl;

    return 0;
}
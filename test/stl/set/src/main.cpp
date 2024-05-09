/**
*/

#include <iostream>
#include <stdexcept>
#include <set>
#include <vector>

typedef std::set<std::vector<int>> setVec;

int main(int argc, char** argv)
{
    setVec set1;
    set1.insert({1, 2, 3, 4, 5});
    set1.insert({1, 2, 3});
    set1.insert({1, 2, 3, 4, 5, 6, 7, 8});
    set1.insert({1, 2, 3 ,7 ,8});

    set1.erase({1, 2, 3});

    for(auto item : set1)
    {
        for (auto i : item)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    setVec::iterator it = set1.begin();

    return 0;
}

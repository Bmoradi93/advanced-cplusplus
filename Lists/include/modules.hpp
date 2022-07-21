#include <iostream>
#include <list>

namespace ns
{
    class myClass
    {
        public:
            myClass();
            ~myClass();
            void createList();
            void eraseElement(std::list<int> input_list);
    };
}
#include <iostream>
#include <initializer_list>
#include <vector>

class MyCollection {
public:
    std::vector<int> data;

    MyCollection(std::initializer_list<int> list) : data(list) {
        std::cout << "Initialized with a list of size " << list.size() << std::endl;
    }

    void print() const {
        for (auto item : data) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MyCollection mc = {1, 2, 3, 4, 5};
    mc.print();  // Output: 1 2 3 4 5
    return 0;
}

/**
*/

#include <iostream>
#include <stdexcept>

template <typename T>
class Box
{
    private:
    T content_;

    public:
    T getContent() const
    {
        return content_;
    } 

    void setContent (const T content)
    {
        content_ = content;
    }
};

template <typename T>
T add_numbers(T x, T y)
{
    T z  = x + y;

    return z;
}

int main (int argc, char** argv)
{
    Box<std::string> b;
    b.setContent("Drone Box!");
    std::cout << "Content: " << b.getContent() << std::endl;

    add_numbers<int>(12, 13);

    std::cout << add_numbers<int>(12, 13) << std::endl;
    std::cout << add_numbers<double>(12.12, 13.13) << std::endl;
    std::cout << add_numbers<float>(12.12f, 13.13f) << std::endl;
    std::cout << add_numbers<char>('a', 'b');
    return 0;
}
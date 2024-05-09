#include <iostream>

template <typename T>
class Point
{
    public:
    Point(T x, T y): x_(x), y_(y)
    {
        std::cout << "Point(" << x_ << ", " << y_ << ")" << std::endl;
    }

    void disp()
    {
        std::cout << "Point(" << x_ << ", " << y_ << ")" << std::endl;
    }

    // operator ++ prefix operator
    Point& operator++()
    {
        x_++;
        y_++;

        return *this; 
    }

    // operator ++ postfix operator
    Point& operator++(int)
    {
        Point temp = *this;
        ++(*this);

        return temp;
    }
    private:
    T x_;
    T y_;
};

class NetworkConnection
{
    public:
    NetworkConnection(): isConnected_(false) {}

    void connect()
    {
        isConnected_ = true;
    }

    void disconnect()
    {
        isConnected_ = false;
    }

    // operator !
    bool operator!()
    {
        return !isConnected_;
    }

    private:
    bool isConnected_ = false;
};

int main(int arg, char** argv)
{
    Point<int> p1(1, 2);
    ++p1;
    p1.disp();

    NetworkConnection nt;
    nt.connect();

    if(!nt)
    {
        std::cout << "Network is not connected" << std::endl;
    }
    else
    {
        std::cout << "Network is connected" << std::endl;
    }


    return 0;
}
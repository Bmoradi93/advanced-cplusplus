#include <iostream>
#include <vector>

template <typename T>
class Point
{
    public:
    Point(T x, T y) : x_(x), y_(y)
    {
        std::cout << "Point(" << x_ << ", " << y_ << ")" << std::endl;
    }

    // operator+
    Point operator+(const Point& p)
    {
        return Point(x_ + p.x_, y_ + p.y_);
    }

    // operator-
    Point operator-(const Point& p)
    {
        return Point(x_ - p.x_, y_ - p.y_);
    }

    // oprator/
    Point operator/(const Point& p)
    {
        return Point(x_ / p.x_, y_ / p.y_);
    }

    // operator*
    Point operator*(const Point& p)
    {
        return Point(x_ * p.x_, y_ * p.y_);

    }
    private:
    T x_;
    T y_;
};

int main(int argc, char** argv)
{
    Point<int> p1(1,2);
    Point<int> p2(1,2);
    Point<int> p3 =  p1 + p2;
    Point<int> p4 =  p1 - p2;
    Point<int> p5 =  p1 / p2;
    Point<int> p6 =  p1 * p2;

    return 0;
}
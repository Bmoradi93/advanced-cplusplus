/**
 * std::invalid_argument
*/

// #include <iostream>

// void eval(int& value)
// {
//     if (value < 0)
//     {
//         throw std::invalid_argument("Invalid value!");
//     }
// }

// int main()
// {
//     int x = -9;
//     try
//     {
//         eval(x);
//     }catch (const std::invalid_argument& e)
//     {
//         std::cout << e.what() << std::endl;
//     }


//     return 0;
// }



/**
 * std::runtime_error
*/

#include <iostream>
#include <stdexcept>

template <typename T>

T devide (T num, T den)
{
    if (den == 0)
    {
        throw std::runtime_error("This is so fucked up!");
    }
    
    return (num / den);
}


int main(int argc, char** argv)
{
    try
    {
        int i = 3;
        int j = 0;
        devide(i, j);
    } catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

// /**
//  * 
// */

// #include <iostream>
// #include <stdexcept>

// class CustomException : public std::exception
// {
//     private:
//     std::string message_;
//     int error_code_;

//     public:
//     CustomException(std::string message, int error_code) 
//     : message_(message), error_code_(error_code) {}

//     const char* what() const noexcept override
//     {
//         return message_.c_str();;
//     }

//     int getErrorCode() const noexcept
//     {
//         return error_code_;
//     }
// };

// void riskyFunc()
// {
//     throw CustomException("This is a fucked up exception!", 1);
// }

// int main(int argc, char** argv)
// {
//     try
//     {
//         riskyFunc();
//     } catch (const CustomException& e)
//     {
//         std::cout << e.what() << std::endl;
//         std::cout << e.getErrorCode() << std::endl;
//     } catch (const std::exception& e)
//     {
//         std::cout << e.what() << std::endl;
//     } catch (...)
//     {
//         std::cout << "Unknown Error!" << std::endl;
//     }
// }

#include <iostream>
#include <stdexcept>

class CustomException : public std::exception
{
    private:
    std::string message_;
    int error_code_;

    public:
    CustomException(std::string msg, int err_code)
    : message_(msg), error_code_(err_code) {}

    const char* what() const noexcept override
    {
        return message_.c_str();
    }

    int getErrorCode() const noexcept
    {
        return error_code_;
    }
};

template <typename T>
T riskyFunc()
{
    throw CustomException("This is a fucked up exception!", 1);
}

int main(int argc, char** argv)
{
    try
    {
        riskyFunc<int>();
    } catch (CustomException& e)
    {
        std::cout << e.what() << std::endl;
        std::cout << e.getErrorCode() << std::endl;
    } catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    } catch (...)
    {
        std::cout << "Unknown Error!" << std::endl;
    }
    return 0;
}
#include <iostream>

class IntArray
{
   public:
   // constructor:
   IntArray(int size)
   : size_(size), data_(new int[size]) {}

   // copy constructor
   IntArray(const IntArray& other)
   :size_(other.size_), data_(new int[other.size_])
   {
      std::copy(other.data_, other.data_ + other.size_, data_);
   }

   // copy assignment operator

   IntArray& operator=(const IntArray& other)
   {
      if(this != &other)
      {
         IntArray temp = other;
         std::swap(data_, temp.data_);
         std::swap(size_, temp.size_);
      }
      return *this;
   }
   
   private:

   int size_;
   int* data_;
};

int main(int argc, char** argv)
{
   IntArray a1(10);

   IntArray a2(a1);

   IntArray a3(20);

   a3 = a1;

   return 0;
}






















// /**
// */

// #include <iostream>
// #include <algorithm> // for std::copy

// class IntArray
// {
//    public:
//    IntArray(int size)
//    : size_(size), data_(new int[size]) {}

//    // copy constructor
//    IntArray(const IntArray& other)
//    : size_(other.size_), data_(new int[other.size_])
//    {
//       std::copy(other.data_, other.data_ + other.size_, data_);
//    }

//    // copy assignment operator
//    // IntArray& operator=(const IntArray& other)
//    IntArray& operator=(const IntArray& other)
//    {
//       if(this != &other)
//       {
//          IntArray temp = other; // uses copy constructor
//          std::swap(size_, temp.size_);
//          std::swap(data_, temp.data_);
//       }
//       return *this;
//    }

//    private:
//    int size_;
//    int* data_;
// };

// int main(int argc, char** argv)
// {
//    IntArray a(10);
//    IntArray b(a); // uses copy constructor

//    a = b;
//    return 0;
// }
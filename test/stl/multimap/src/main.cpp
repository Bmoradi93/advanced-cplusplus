/**
*/

#include <iostream>
#include <stdexcept>
#include <map>

int main(int argc, char** argv)
{
   std::multimap<std::string, std::string> mmap;
   mmap.insert(std::make_pair("SFU", "ENG"));
   mmap.insert(std::make_pair("SFU", "sci"));
   mmap.insert(std::make_pair("SFU", "art"));
   mmap.insert(std::make_pair("SFU", "med"));
   mmap.insert(std::make_pair("UBC", "rob"));
   mmap.insert(std::make_pair("UBC", "civil"));

   auto range = mmap.equal_range("SFU");
   for (auto it=range.first; it != range.second; it++)
   {
      std::cout << it->first << " " << it->second << std::endl;
   }
    return 0;
}
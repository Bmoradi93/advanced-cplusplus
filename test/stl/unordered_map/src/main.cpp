/**
*/

#include <iostream>
#include <stdexcept>
#include <map>

int main(int argc, char** argv)
{
   std::map<int, std::string> test_map;
   test_map[1] = "C++";
   test_map[2] = "Java";
   test_map[3] = "Python";
   test_map[4] = "PHP";
   test_map[5] = "C#";
   test_map[6] = "Ruby";
   test_map[7] = "Perl";
   test_map[8] = "Objective-C";
   test_map[9] = "Scala";
   test_map[10] = "Clojure";
   test_map[11] = "Erlang";

//    for(auto item : test_map)
//    {
//     std::cout << item.first << ": " <<item.second << std::endl;
//    }

   // find

//    auto f = test_map.find(1);
//    if (f != test_map.end())
//    {
//     std::cout << f->first << ": " << f->second << std::endl;
//    }

   // pair
   auto p = std::make_pair(12, "Behnam");

   test_map.insert(p);
   test_map.emplace(1, "Diman");

//    test_map.erase(1);

   // size
   auto size = test_map.size();
   std::cout << "Size: " << size << std::endl;

   for(auto item : test_map)
   {
    std::cout << item.first << ": " <<item.second << std::endl;
   }

   // at()
   try
   {
    std::cout << "at: " << test_map.at(1) << std::endl;
   } catch (std::out_of_range& e)
   {
    std::cout << e.what() << std::endl;
   }

   // lower bound

   auto lb = test_map.lower_bound(5);
   if (lb != test_map.end())
   {
    std::cout << "Lower Bound: "  << lb->first << ": " << lb->second << std::endl;
   }

    return 0;
}
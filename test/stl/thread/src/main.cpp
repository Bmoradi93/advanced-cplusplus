/**
*/

#include <iostream>
#include <stdexcept>
#include <vector>
#include <thread>

void workerFunction(std::size_t id)
{
    std::cout << "Worker: " << id << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    // std::cout << "Worker: " << id << " done" << std::endl;
}

int main(int argc, char** argv)
{
    std::vector<std::thread> threads;
    for (std::size_t i = 0; i < 10; ++i)
    {
        threads.push_back(std::thread(workerFunction, i));
    }

    for (auto& thread : threads)
    {
        thread.join();
    }

    return 0;
}
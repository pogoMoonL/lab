#include <string>
#include <iostream>
#include <memory>
#include "Ball.h"
#include "RamTwoDim.h"



template <typename T, size_t n>
void print_array(T const (&arr)[n])
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i] << ' ';
    }
}

int main(int argc, char **argv)
{

    const char *pc = "Hello";
    char *p = const_cast<char *>(pc);

    Ball nick(2.23, p);

    std::cout << nick.name() << std::endl;

    auto lambda = []()
    {
        std::cout << "Hello, Lambda Nick" << std::endl;
    };

    RamTwoDim nick2;

    std::cout << nick2.getColumn() << std::endl;

    lambda();

    int input[] = {1, 2, 3, 4, 5};

    print_array(input);

    return 0;
}
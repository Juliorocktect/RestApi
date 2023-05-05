#include <string>
#include <iostream>
#include "Calculator.h"

int main()
{
    std::cout << "hallo welt" << std::endl;
    std::cout << calc::add(1, 2) << std::endl;
    std::cout << calc::sub(2, 6) << std::endl;
}
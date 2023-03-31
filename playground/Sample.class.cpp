#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int i, int k) : a1(i), a2(k)
{
    std::cout << "Constructor called" << std::endl;
    std::cout << this->a1 << std::endl;
    std::cout << this->a2 << std::endl;
    return;
}

Sample::~Sample(void)
{
    
}
#include <string>
#include <iostream>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *brainPtr = &brain;
    std::string &brainRef = brain;
    std::cout << "memory of str           " << &brain << std::endl;
    std::cout << "memory of str ptr       " << brainPtr << std::endl;
    std::cout << "memory of str refrence  " << &brainRef << std::endl;
    std::cout << std::endl;
    std::cout << "str                     " << brain << std::endl;
    std::cout << "str ptr                 " << *brainPtr << std::endl;
    std::cout << "str refrence            " << brainRef << std::endl;
    std::cout << std::endl;
    return (0);
}

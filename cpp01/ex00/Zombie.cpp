#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    setName(name);
    std::cout << this->name << ": Zombie created" << std::endl;
}
Zombie::Zombie(void)
{
    std::cout << this->name << ": Zombie created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": Zombie destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" << this->name << '>' << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

#include "Weapon.hpp"

Weapon::Weapon(std::string Wtype) : type(Wtype)
{
}


Weapon::Weapon()
{
}
Weapon::~Weapon()
{
}

std::string const &Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
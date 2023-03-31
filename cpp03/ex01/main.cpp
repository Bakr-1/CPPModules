#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clapTrap("ClapTrap_1");
    clapTrap.beRepaired(5);
    clapTrap.takeDamage(10);
    clapTrap.attack("ClapTrap_1");

    ScavTrap scavTrap("ScavTrap_1");
    scavTrap.attack("ScavTrap_1");
    scavTrap.beRepaired(5);
    scavTrap.takeDamage(10);
    scavTrap.guardGate();
    return 0;
}
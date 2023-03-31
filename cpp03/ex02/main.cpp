#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    FragTrap fragTrap("FragTrap_1");
    fragTrap.attack("FragTrap_1");
    fragTrap.beRepaired(5);
    fragTrap.takeDamage(10);
    fragTrap.highFivesGuys();

    return 0;
}
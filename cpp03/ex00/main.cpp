#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("ClapTrap_1");
    clapTrap.beRepaired(5);
    clapTrap.takeDamage(10);
    clapTrap.attack("ClapTrap_1");

    ClapTrap clapTrap2(clapTrap);
    clapTrap2.beRepaired(5);
    clapTrap2.attack("enemy");
    clapTrap2.takeDamage(10);

    ClapTrap clapTrap3 = clapTrap2;
    clapTrap3.attack("enemy");
    clapTrap3.takeDamage(10);
    clapTrap3.beRepaired(5);
    return 0;
}
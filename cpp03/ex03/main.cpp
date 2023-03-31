#include "DiamondTrap.hpp"

int main()
{
    ClapTrap clapTrap("ClapTrap_1");
    clapTrap.beRepaired(5);
    clapTrap.takeDamage(10);
    clapTrap.attack("ClapTrap_1");


	DiamondTrap diamondTrap("DiamondTrap_1");
	diamondTrap.attack("DiamondTrap_1");
	diamondTrap.beRepaired(5);
	diamondTrap.takeDamage(10);
	diamondTrap.highFivesGuys();
	diamondTrap.guardGate();
	diamondTrap.whoAmI();
	
    return 0;
}
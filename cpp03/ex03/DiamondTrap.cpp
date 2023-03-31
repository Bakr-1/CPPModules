#include "DiamondTrap.hpp"

// ----------------------------- Constructors ------------------------------ //
DiamondTrap::DiamondTrap():ClapTrap("Default_clap_name", 100, 50, 30)
{
	_Name = "Default";
	_DIAMONDTRAP_AUTO(32, "Default Constructor");
}

DiamondTrap::DiamondTrap(const DiamondTrap& c):ClapTrap(c._Name+"_clap_name", 100, 50, 30), ScavTrap(), FragTrap()
{
	_Name = c.Name+"_clap_name";
	_DIAMONDTRAP_AUTO(32, "Copy Constructor");
}

DiamondTrap::DiamondTrap(std::string Na):ClapTrap(Na + "_clap_name", 100, 50, 30), ScavTrap(), FragTrap() 
{
	_Name = Na;
	_DIAMONDTRAP_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
DiamondTrap::~DiamondTrap()
{
	_DIAMONDTRAP_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

DiamondTrap & DiamondTrap::operator=(const DiamondTrap& c)
{
	_DIAMONDTRAP_AUTO(32, "Copy Assignement Operator");
	_Name = c._Name;
	ClapTrap::operator=(c);
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void DiamondTrap::whoAmI()
{
	std::cout << YELLOW << "DiamondTrap " << _Name << " is actually a ClapTrap with name " << ClapTrap::Name << RESET << std::endl;
}

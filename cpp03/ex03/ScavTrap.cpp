#include "ScavTrap.hpp"

// ----------------------------- Constructors ------------------------------ //
ScavTrap::ScavTrap():ClapTrap("Default_Scav_name", 100, 50, 20)
{
	_SCAVTRAP_AUTO(32, "Default Constructor");
}

ScavTrap::ScavTrap(const ScavTrap& c): ClapTrap(c)
{
	_SCAVTRAP_AUTO(32, "Copy Constructor");
	*this = c;
}

ScavTrap::ScavTrap(std::string name) 
{
	_SCAVTRAP_AUTO(32, "Fields Constructor");
	Name = name;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

// ------------------------------ Destructor ------------------------------- //
ScavTrap::~ScavTrap()
{
	_SCAVTRAP_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

ScavTrap & ScavTrap::operator=(const ScavTrap& c)
{
	_SCAVTRAP_AUTO(32, "Copy Assignement Operator");
	Name = c.Name;
	HitPoints = c.HitPoints;
	EnergyPoints = c.EnergyPoints;
	AttackDamage = c.AttackDamage;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void ScavTrap::attack(std::string const & target)
{
	if (HitPoints > 0 && EnergyPoints > 0)
	{
		std::cout << PURPLE << "From Scav " << Name << " Attacked " << target << " with " << this->AttackDamage << " points of damage!" << RESET << std::endl;
		EnergyPoints -= 1;
	}
	else
		std::cout << PURPLE << "From Scav " << Name << " tried to attack but "<< " is out of energy!" << RESET << std::endl;
	std::cout << CYAN << Name << " Energy:" << EnergyPoints << " left" << RESET << std::endl;
	std::cout << CYAN << Name << " HitPoints: " << HitPoints << " left" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
	_SCAVTRAP_AUTO(32, "Guard Gate");
}
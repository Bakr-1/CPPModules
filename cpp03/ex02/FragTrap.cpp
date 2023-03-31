#include "FragTrap.hpp"

// ----------------------------- Constructors ------------------------------ //
FragTrap::FragTrap()
{
	_FRAGTRAP_AUTO(32, "Default Constructor");
}

FragTrap::FragTrap(const FragTrap& c) 
{
	_FRAGTRAP_AUTO(32, "Copy Constructor");
	*this = c;
}

FragTrap::FragTrap(const std::string name) 
{
	_FRAGTRAP_AUTO(32, "Fields Constructor");
	Name = name;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

// ------------------------------ Destructor ------------------------------- //
FragTrap::~FragTrap()
{
	_FRAGTRAP_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

FragTrap & FragTrap::operator=(const FragTrap& c)
{
	_FRAGTRAP_AUTO(32, "Copy Assignement Operator");
	Name = c.Name;
	HitPoints = c.HitPoints;
	EnergyPoints = c.EnergyPoints;
	AttackDamage = c.AttackDamage;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void FragTrap::highFivesGuys()
{
	_FRAGTRAP_AUTO(32, Name + " High Five u!");
}

#include "ClapTrap.hpp"

// ----------------------------- Constructors ------------------------------ //
ClapTrap::ClapTrap(): Name("Default"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	_CLAPTRAP_AUTO(32, "Default Constructor");
}

ClapTrap::ClapTrap(const ClapTrap& c) : Name(c.Name), HitPoints(c.HitPoints), EnergyPoints(c.EnergyPoints), AttackDamage(c.AttackDamage)
{
	_CLAPTRAP_AUTO(32, "Copy Constructor");
	*this = c;
}

ClapTrap::ClapTrap(std::string str): Name(str), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	_CLAPTRAP_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
ClapTrap::~ClapTrap()
{
	_CLAPTRAP_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

ClapTrap & ClapTrap::operator=(const ClapTrap& c)
{
	_CLAPTRAP_AUTO(32, "Copy Assignement Operator");
	Name = c.Name;
	HitPoints = c.HitPoints;
	EnergyPoints = c.EnergyPoints;
	AttackDamage = c.AttackDamage;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
// std::string ClapTrap::get_Name() const{ return Name; }
// void ClapTrap::set_Name(std::string input){ Name = input; }

// int ClapTrap::get_HitPoints() const{ return HitPoints; }
// void ClapTrap::set_HitPoints(int input){ HitPoints = input; }

// int ClapTrap::get_EnergyPoints() const{ return EnergyPoints; }
// void ClapTrap::set_EnergyPoints(int input){ EnergyPoints = input; }

// int ClapTrap::get_AttackDamage() const{ return AttackDamage; }
// void ClapTrap::set_AttackDamage(int input){ AttackDamage = input; }



// --------------------------------- Methods ------------------------------- //

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints > 0 && EnergyPoints > 0)
	{
		std::cout << YELLOW << Name << " Attacked " << target << " with " << AttackDamage << " points of damage!" << RESET << std::endl;
		EnergyPoints -= 1;
	}
	else
		std::cout << YELLOW << "ClapTrap " << Name << " tried to attack but "<< " is out of energy!" << RESET << std::endl;
	std::cout << YELLOW << "Energy:" << EnergyPoints << " left" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints > 0)
	{
		HitPoints -= amount;
		std::cout << YELLOW << "ClapTrap " << Name << " takes " << amount << " points of damage!" << RESET << std::endl;
		if (HitPoints < 0)
			std::cout << YELLOW << "ClapTrap " << Name << " is dead!" << RESET << std::endl;
		else
			std::cout << YELLOW << "ClapTrap " << Name << " has " << HitPoints << " HitPoints left!" << RESET << std::endl;
	}	
	else
		std::cout << YELLOW << "ClapTrap " << Name << " is already dead!" << RESET << std::endl;
	if (HitPoints < 0)
		HitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints > 0)
	{
		HitPoints += amount;
		EnergyPoints--;
		std::cout << YELLOW << "ClapTrap " << Name << " is repaired by " << amount << " points!" << RESET << std::endl;
		std::cout << YELLOW << "ClapTrap " << Name << " has " << HitPoints << " HitPoints left!" << RESET << std::endl;
	}
	else
		std::cout << YELLOW << Name << " doesn't have enough energy to be repaired!" << RESET << std::endl;
	std::cout << YELLOW << "Energy: " << EnergyPoints << " left" << RESET << std::endl;
}
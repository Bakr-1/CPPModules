#include "WrongAnimal.hpp"

// ----------------------------- Constructors ------------------------------ //
WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	_WRONGANIMAL_AUTO(32, "Default Constructor");
}

WrongAnimal::WrongAnimal(const WrongAnimal& c) 
{
	_WRONGANIMAL_AUTO(32, "Copy Constructor");
	*this = c;
}

// ------------------------------ Destructor ------------------------------- //
WrongAnimal::~WrongAnimal()
{
	_WRONGANIMAL_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& c)
{
	_WRONGANIMAL_AUTO(32, "Copy Assignement Operator");
	type = c.get_type();
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //

std::string WrongAnimal::get_type() const{ return type; }
// --------------------------------- Methods ------------------------------- //

void	WrongAnimal::makeSound() const
{
	// _ANIMAL_AUTO(33, "makeSound");
	std::cout << "WrongAnimal sound" << std::endl;
}
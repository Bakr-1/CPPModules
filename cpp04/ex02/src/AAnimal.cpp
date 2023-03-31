#include "AAnimal.hpp"

// ----------------------------- Constructors ------------------------------ //
AAnimal::AAnimal()
{
	type = "Animal";
	_ANIMAL_AUTO(32, "Default Constructor");
}

AAnimal::AAnimal(const AAnimal& c)
{
	_ANIMAL_AUTO(32, "Copy Constructor");
	type = c.get_type();
	*this = c;
}

// ------------------------------ Destructor ------------------------------- //
AAnimal::~AAnimal()
{
	_ANIMAL_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

AAnimal & AAnimal::operator=(const AAnimal& c)
{
	_ANIMAL_AUTO(32, "Copy Assignement Operator");
	type = c.type;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string AAnimal::get_type() const{ return type; }
void AAnimal::set_type(std::string input){ type = input; }



// --------------------------------- Methods ------------------------------- //

void	AAnimal::makeSound() const
{
	// _ANIMAL_AUTO(33, "makeSound");
	std::cout << "Animal sound" << std::endl;
}
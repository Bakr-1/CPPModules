#include "Animal.hpp"

// ----------------------------- Constructors ------------------------------ //
Animal::Animal()
{
	type = "Animal";
	_ANIMAL_AUTO(32, "Default Constructor");
}

Animal::Animal(const Animal& c)
{
	_ANIMAL_AUTO(32, "Copy Constructor");
	type = c.get_type();
	*this = c;
}

// ------------------------------ Destructor ------------------------------- //
Animal::~Animal()
{
	_ANIMAL_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Animal & Animal::operator=(const Animal& c)
{
	_ANIMAL_AUTO(32, "Copy Assignement Operator");
	type = c.type;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string Animal::get_type() const{ return type; }
void Animal::set_type(std::string input){ type = input; }



// --------------------------------- Methods ------------------------------- //

void	Animal::makeSound() const
{
	// _ANIMAL_AUTO(33, "makeSound");
	std::cout << "Animal sound" << std::endl;
}
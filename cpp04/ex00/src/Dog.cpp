#include "Dog.hpp"

// ----------------------------- Constructors ------------------------------ //
Dog::Dog()
{
	type = "Dog";
	_DOG_AUTO(32, "Default Constructor");
}

Dog::Dog(const Dog& c)
{
	_DOG_AUTO(32, "Copy Constructor");
	type = c.get_type();
	*this = c;
}

// ------------------------------ Destructor ------------------------------- //
Dog::~Dog()
{
	_DOG_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Dog & Dog::operator=(const Dog& c)
{
	_DOG_AUTO(32, "Copy Assignement Operator");
	type = c.get_type();
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

#include "Cat.hpp"

// ----------------------------- Constructors ------------------------------ //
Cat::Cat()
{
	type = "Cat";
	_CAT_AUTO(32, "Default Constructor");
}

Cat::Cat(const Cat& c) 
{
	type = c.get_type();;
	_CAT_AUTO(32, "Copy Constructor");
	*this = c;
}

// ------------------------------ Destructor ------------------------------- //
Cat::~Cat()
{
	_CAT_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Cat & Cat::operator=(const Cat& c)
{
	_CAT_AUTO(32, "Copy Assignement Operator");
	type = c.get_type();
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
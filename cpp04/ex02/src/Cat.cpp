#include "Cat.hpp"

// ----------------------------- Constructors ------------------------------ //
Cat::Cat()
{
	type = "Cat";
	this->brain = new Brain();
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
	delete this->brain;
	_CAT_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Cat & Cat::operator=(const Cat& c)
{
	_CAT_AUTO(32, "Copy Assignement Operator");
	if (this == &c)
	{
		this->type = c.get_type();
		delete this->brain;
		this->brain = new Brain(*c.get_brain());
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //

Brain* Cat::get_brain() const
{
	return (this->brain);
}

// --------------------------------- Methods ------------------------------- //

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
#include "Dog.hpp"

// ----------------------------- Constructors ------------------------------ //
Dog::Dog()
{
	type = "Dog";
	this->brain = new Brain();
	_DOG_AUTO(32, "Default Constructor");
}

Dog::Dog(const Dog& c)
{
	_DOG_AUTO(32, "Copy Constructor");
	this->brain = new Brain(*c.get_brain());
	*this = c;
}

// ------------------------------ Destructor ------------------------------- //
Dog::~Dog()
{
	delete this->brain;
	_DOG_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Dog & Dog::operator=(const Dog& c)
{
	_DOG_AUTO(32, "Copy Assignement Operator");
	if (this == &c)
	{
		this->type = c.get_type();
		delete this->brain;
		this->brain = new Brain(*c.get_brain());
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //

Brain* Dog::get_brain() const
{
	return this->brain;
}
// --------------------------------- Methods ------------------------------- //

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

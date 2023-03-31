#include "WrongCat.hpp"

// ----------------------------- Constructors ------------------------------ //
WrongCat::WrongCat()
{
	type = "WrongCat";
	_WRONGCAT_AUTO(32, "Default Constructor");
}

WrongCat::WrongCat(const WrongCat& c) 
{
	_WRONGCAT_AUTO(32, "Copy Constructor");
	*this = c;
}

// ------------------------------ Destructor ------------------------------- //
WrongCat::~WrongCat()
{
	_WRONGCAT_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

WrongCat & WrongCat::operator=(const WrongCat& c)
{
	_WRONGCAT_AUTO(32, "Copy Assignement Operator");
	type = c.get_type();
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //

std::string WrongCat::get_type() const{ return type; }
// --------------------------------- Methods ------------------------------- //

void	WrongCat::makeSound() const
{
	_WRONGCAT_AUTO(33, "makeSound");
	std::cout << "WrongCat sound" << std::endl;
}

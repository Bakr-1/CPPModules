#include "Fixed.hpp"

// ----------------------------- Constructors ------------------------------ //
Fixed::Fixed()
{
	_FIXED_AUTO(32, "Default Constructor");
	this->i = 0;
}

Fixed::Fixed(const Fixed& c) 
{
	_FIXED_AUTO(32, "Copy Constructor");
	*this = c;
}

// Fixed::Fixed() 
// {
// 	_FIXED_AUTO(32, "Fields Constructor");
// }

// ------------------------------ Destructor ------------------------------- //
Fixed::~Fixed()
{
	_FIXED_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Fixed & Fixed::operator=(const Fixed& c)
{
	_FIXED_AUTO(33, "Copy Assignement Operator");
	if (this != &c)
	{
		this->i = c.getRawBits();
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //

int	Fixed::getRawBits() const
{
	std::cout << YELLOW << "getRawBits member function called" << RESET << std::endl;
	return this->i;
}

void	Fixed::setRawBits(int const raw)
{
	this->i = raw;
}

// --------------------------------- Methods ------------------------------- //


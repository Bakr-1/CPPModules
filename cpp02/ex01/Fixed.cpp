#include "Fixed.hpp"

// ----------------------------- Constructors ------------------------------ //
Fixed::Fixed()
{
	_FIXED_AUTO(32, "Default Constructor");
	this->i = 0;
}

Fixed::Fixed(const int i)
{
	_FIXED_AUTO(32, "Int Constructor");
	this->i = i << this->bits;
}

Fixed::Fixed(const float f)
{
	_FIXED_AUTO(32, "Float Constructor");
	this->i = roundf(f * (1 << this->bits));
}

Fixed::Fixed(const Fixed & c) 
{
	_FIXED_AUTO(32, "Copy Constructor");
	*this = c;
}

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
	// std::cout << "getRawBits member function called" << std::endl;
	return this->i;
}


// --------------------------------- Methods ------------------------------- //

void	Fixed::setRawBits(int const raw)
{
	this->i = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->i / (1 << this->bits);
}

int		Fixed::toInt(void) const
{
	return this->i >> this->bits;
}


// --------------------------------- Overload ------------------------------- //

std::ostream & operator<<(std::ostream & o, Fixed const & c)
{
	o << c.toFloat();
	return o;
}

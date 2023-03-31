#include "Fixed.hpp"

// ----------------------------- Constructors ------------------------------ //
Fixed::Fixed()
{
	_FIXED_AUTO(32, "Default Constructor");
	this->i = 0;
}

Fixed::Fixed(const int c)
{
	_FIXED_AUTO(32, "Int Constructor");
	this->i = c << this->bits;
}

Fixed::Fixed(const float f_v)
{
	_FIXED_AUTO(32, "Float Constructor");
	this->i = roundf(f_v * (1 << this->bits));
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
	// _FIXED_AUTO(33, "Copy Assignement Operator");
	if (this != &c)
	{
		this->i = c.getRawBits();
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


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

Fixed	Fixed::operator+(const Fixed& c) const
{
	// this->i += c.getRawBits();
	// return *this;
	return (Fixed(this->toFloat() + c.toFloat()));

}

Fixed	Fixed::operator-(const Fixed& c) const
{
	// this->i -= c.getRawBits();
	// return *this;
	return (Fixed(this->toFloat() - c.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& c) const
{
	// this->i *= c.getRawBits();
	// this->i /= (1 << this->bits);
	// return *this;
	return (Fixed(this->toFloat() * c.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& c) const
{
	// this->i *= (1 << this->bits);
	// this->i /= c.getRawBits();
	// return *this;
	return (Fixed(this->toFloat() / c.toFloat()));
}

// ----------------------------------------------

bool	Fixed::operator>(const Fixed& c) const
{
	return this->i > c.getRawBits();
}

bool	Fixed::operator<(const Fixed& c) const
{
	return this->i < c.getRawBits();
}

bool	Fixed::operator>=(const Fixed& c) const
{
	return this->i >= c.getRawBits();
}

bool	Fixed::operator<=(const Fixed& c) const
{
	return this->i <= c.getRawBits();
}

bool	Fixed::operator==(const Fixed& c) const
{
	return this->i == c.getRawBits();
}

bool	Fixed::operator!=(const Fixed& c) const
{
	return this->i != c.getRawBits();
}

// ----------------------------------------------

Fixed	Fixed::operator++()
{
	this->i++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->i++;
	return tmp;
}

Fixed	Fixed::operator--(void)
{
	this->i--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->i--;
	return tmp;
}

// ----------------------------------------------

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	return (a < b) ? a : b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	return (a > b) ? a : b;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	return (a < b) ? a : b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	return (a > b) ? a : b;
}

// ----------------------------------------------

// --------------------------------- Overload ------------------------------- //

std::ostream & operator<<(std::ostream & o, Fixed const & c)
{
	o << c.toFloat();
	return o;
}

// --------------------------------- Accessor ------------------------------- //
int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->i;
}

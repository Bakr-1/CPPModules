#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class Fixed
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Fixed();	// Default Constructor
	// Fixed();	// Fields Constructor
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Fixed();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Fixed & operator=(const Fixed& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //


// ------------------------------ Accessor ------------------------------- //
	int		getRawBits (void) const;

// --------------------------------- Methods ------------------------------- //
	float	toFloat(void) const;
	int		toInt(void) const;
	void	setRawBits (int const raw);
	Fixed	operator+(const Fixed& c) const;
	Fixed	operator-(const Fixed& c) const;
	Fixed	operator*(const Fixed& c) const;
	Fixed	operator/(const Fixed& c) const;
	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	bool	operator>(const Fixed& c) const;
	bool	operator<(const Fixed& c) const;
	bool	operator>=(const Fixed& c) const;
	bool	operator<=(const Fixed& c) const;
	bool	operator==(const Fixed& c) const;
	bool	operator!=(const Fixed& c) const;

	static Fixed&	min(Fixed& a, Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);


private:
	int	i;
	static const int bits = 8;
};
std::ostream & operator<<(std::ostream & o, Fixed const & c);

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _FIXED_ARGS ""
#  define _FIXED_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			 << _FIXED_ARGS \
			  << "}" << std::endl;
# else

#  define _FIXED_AUTO(x, y) ;
#  define _FIXED_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* FIXED_HPP */

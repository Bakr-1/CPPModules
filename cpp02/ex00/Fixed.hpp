#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class Fixed
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Fixed();	// Default Constructor
	// Fixed();	// Fields Constructor
	Fixed(const Fixed& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Fixed();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Fixed & operator=(const Fixed& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	
int		getRawBits (void) const;
void	setRawBits (int const raw);
// --------------------------------- Methods ------------------------------- //

private:
	int	i;
	static const int bits = 8;
};

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

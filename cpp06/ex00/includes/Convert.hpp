#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include <limits>
# include <stdint.h>
# include <numbers>
# include <iomanip>

class Convert
{
public:
// --------------------------------- Fields -------------------------------- //
	int		_Integer;
	float	_Float;
	double	_Double;
	char	_Char;

// ----------------------------- Constructors ------------------------------ //
	Convert();	// Default Constructor
	Convert(const Convert& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Convert();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Convert & operator=(const Convert& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	void	convert(std::string str, int *Integer, float *Float, double *Double, char *Char);
	void	printChar();
	void	printInt();
	void	printFloat();
	void	printDouble();
private:
	

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _CONVERT_ARGS ""
#  define _CONVERT_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _CONVERT_ARGS  \
			  << "}" << std::endl;
# else

#  define _CONVERT_AUTO(x, y) ;
#  define _CONVERT_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* CONVERT_HPP */

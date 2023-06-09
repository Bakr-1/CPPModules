#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	WrongCat();	// Default Constructor
	WrongCat(const WrongCat& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~WrongCat();	// Destructor

// ------------------------------- Operators ------------------------------- //
	WrongCat & operator=(const WrongCat& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string get_type() const;

// --------------------------------- Methods ------------------------------- //
	void	makeSound() const;
private:
	

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _WRONGCAT_ARGS ""
#  define _WRONGCAT_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << _WRONGCAT_ARGS  \
			  << "}" << std::endl;
# else

#  define _WRONGCAT_AUTO(x, y) ;
#  define _WRONGCAT_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* WRONGCAT_HPP */

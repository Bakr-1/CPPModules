#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: virtual public Animal
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Cat();	// Default Constructor
	Cat(const Cat& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Cat();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Cat & operator=(const Cat& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	void	makeSound() const;
private:
	

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _CAT_ARGS ""
#  define _CAT_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << _CAT_ARGS << "}" << std::endl;
# else

#  define _CAT_AUTO(x, y) ;
#  define _CAT_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* CAT_HPP */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog: virtual public Animal
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Dog();	// Default Constructor
	Dog(const Dog& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Dog();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Dog & operator=(const Dog& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //

// --------------------------------- Methods ------------------------------- //
	void	makeSound() const;
};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _DOG_ARGS ""
#  define _DOG_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << _DOG_ARGS << "}" << std::endl;
# else

#  define _DOG_AUTO(x, y) ;
#  define _DOG_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* DOG_HPP */

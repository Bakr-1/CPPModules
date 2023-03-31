#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"

class Dog: public AAnimal
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Dog();	// Default Constructor
	Dog(const Dog& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~Dog();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Dog & operator=(const Dog& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	Brain *get_brain() const;

// --------------------------------- Methods ------------------------------- //
	void	makeSound() const;
private:
	Brain *brain;
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

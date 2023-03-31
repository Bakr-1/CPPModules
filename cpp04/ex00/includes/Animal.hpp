#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Animal();	// Default Constructor
	Animal(const Animal& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~Animal();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Animal & operator=(const Animal& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string get_type() const;
	void set_type(std::string input);
	

// --------------------------------- Methods ------------------------------- //
	virtual void makeSound() const;

protected:
	std::string type;

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _ANIMAL_ARGS _ARG(type) ""
#  define _ANIMAL_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << _ANIMAL_ARGS << "}" << std::endl;
# else

#  define _ANIMAL_AUTO(x, y) ;
#  define _ANIMAL_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* ANIMAL_HPP */

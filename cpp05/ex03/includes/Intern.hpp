#ifndef INTERN_HPP
# define INTERN_HPP

// ----------------------------- Includes ------------------------------ //
# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Intern();	// Default Constructor
	Intern(const Intern& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~Intern();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Intern & operator=(const Intern& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	AForm* makeForm(std::string const & formName, std::string const & target);
private:
	AForm* _makeSForm(std::string const & target);
	AForm* _makeRForm(std::string const & target);
	AForm* _makePForm(std::string const & target);

// ----------------------------- Exceptions -------------------------------- //
public:
	class UnknownFormException : public std::exception
	{
		virtual const char* what() const throw();
	};

	typedef AForm* (Intern::*makeFormPtr)(std::string const & target);
};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _INTERN_ARGS ""
#  define _INTERN_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _INTERN_ARGS  \
			  << "}" << std::endl;
# else

#  define _INTERN_AUTO(x, y) ;
#  define _INTERN_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* INTERN_HPP */

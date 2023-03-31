#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	ShrubberyCreationForm();	// Default Constructor
	ShrubberyCreationForm(std::string const str);	// Fields Constructor
	ShrubberyCreationForm(const ShrubberyCreationForm& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~ShrubberyCreationForm();	// Destructor

// ------------------------------- Operators ------------------------------- //
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	void execute(Bureaucrat const & executor) const;
private:
	std::string _target;
	void _createTree() const;

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _SHRUBBERYCREATIONFORM_ARGS ""
#  define _SHRUBBERYCREATIONFORM_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _SHRUBBERYCREATIONFORM_ARGS  \
			  << "}" << std::endl;
# else

#  define _SHRUBBERYCREATIONFORM_AUTO(x, y) ;
#  define _SHRUBBERYCREATIONFORM_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* SHRUBBERYCREATIONFORM_HPP */

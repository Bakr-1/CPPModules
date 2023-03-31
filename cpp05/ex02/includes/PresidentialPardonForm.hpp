#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
public:
// ----------------------------- Constructors ------------------------------ //
	PresidentialPardonForm();	// Default Constructor
	PresidentialPardonForm(std::string const str);	// Fields Constructor
	PresidentialPardonForm(const PresidentialPardonForm& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~PresidentialPardonForm();	// Destructor

// ------------------------------- Operators ------------------------------- //
	PresidentialPardonForm & operator=(const PresidentialPardonForm& a);
	// Copy Assignement Operator
// --------------------------- Getters && Setters -------------------------- //
	std::string getTarget() const;
// --------------------------------- Methods ------------------------------- //
	void execute(Bureaucrat const & executor) const;
private:
	std::string _target;
};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _PRESIDENTIALPARDONFORM_ARGS ""
#  define _PRESIDENTIALPARDONFORM_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _PRESIDENTIALPARDONFORM_ARGS  \
			  << "}" << std::endl;
# else

#  define _PRESIDENTIALPARDONFORM_AUTO(x, y) ;
#  define _PRESIDENTIALPARDONFORM_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* PRESIDENTIALPARDONFORM_HPP */

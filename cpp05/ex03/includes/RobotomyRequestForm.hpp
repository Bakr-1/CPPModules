#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
public:
// ----------------------------- Constructors ------------------------------ //
	RobotomyRequestForm();	// Default Constructor
	RobotomyRequestForm(std::string const str);	// Fields Constructor
	RobotomyRequestForm(const RobotomyRequestForm& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~RobotomyRequestForm();	// Destructor

// ------------------------------- Operators ------------------------------- //
	RobotomyRequestForm & operator=(const RobotomyRequestForm& a);
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

#  define _ROBOTOMYREQUESTFORM_ARGS ""
#  define _ROBOTOMYREQUESTFORM_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _ROBOTOMYREQUESTFORM_ARGS  \
			  << "}" << std::endl;
# else

#  define _ROBOTOMYREQUESTFORM_AUTO(x, y) ;
#  define _ROBOTOMYREQUESTFORM_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* ROBOTOMYREQUESTFORM_HPP */

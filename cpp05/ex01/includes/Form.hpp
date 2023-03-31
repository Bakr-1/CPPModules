#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
public:
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException() {}
		virtual ~GradeTooHighException() throw() {}
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() {}
		virtual ~GradeTooLowException() throw() {}
		virtual const char* what() const throw();
	};
// ----------------------------- Constructors ------------------------------ //
	Form();	// Default Constructor
	Form(std::string name, int gradeSi, int gradeEx);	// Fields Constructor
	Form(const Form& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Form();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Form & operator=(const Form& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string getName() const;
	bool getSigned() const;
	int getGradeSign() const;
	int getGradeExec() const;
// --------------------------------- Methods ------------------------------- //
	void beSigned(const Bureaucrat& b);

private:
	const std::string _name;
	bool _signed;
	const int _gradeSign;
	const int _gradeExec;

};
// ---------------------------- Global Operators ---------------------------- //
std::ostream & operator<<(std::ostream& o, const Form& a);

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _FORM_ARGS ""
#  define _FORM_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _FORM_ARGS  \
			  << "}" << std::endl;
# else

#  define _FORM_AUTO(x, y) ;
#  define _FORM_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* FORM_HPP */

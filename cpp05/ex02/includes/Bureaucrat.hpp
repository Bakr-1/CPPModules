#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class AForm;

class Bureaucrat
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
public:
// ----------------------------- Constructors ------------------------------ //
	Bureaucrat(std::string n, int g);	// Default Constructor
	Bureaucrat(const Bureaucrat& c);	// Copy Constructor
// ------------------------------ Destructor ------------------------------- //
	virtual ~Bureaucrat();	// Destructor
// ------------------------------- Operators ------------------------------- //
	Bureaucrat & operator=(const Bureaucrat& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string getName() const;
	int getGrade() const;
// --------------------------------- Methods ------------------------------- //
	void incrementGrade();
	void decrementGrade();
	void signForm(AForm & f);
	void executeForm(AForm const & form);
private:
// ------------------------------- Attributes ------------------------------ //
	const std::string name;
	int grade;
	Bureaucrat();
};
// --------------------------- Overload Operators -------------------------- //
std::ostream & operator<<(std::ostream & o, Bureaucrat const & a);

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _BUREAUCRAT_ARGS ""
#  define _BUREAUCRAT_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _BUREAUCRAT_ARGS  \
			  << "}" << std::endl;
# else

#  define _BUREAUCRAT_AUTO(x, y) ;
#  define _BUREAUCRAT_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* BUREAUCRAT_HPP */

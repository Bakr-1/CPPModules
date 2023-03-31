#include "Bureaucrat.hpp"
#include "AForm.hpp"

// ----------------------------- Constructors ------------------------------ //
Bureaucrat::Bureaucrat(): name("Default"), grade(150)
{
	_BUREAUCRAT_AUTO(32, "Default Constructor");
}

Bureaucrat::Bureaucrat(const Bureaucrat& c) 
{
	_BUREAUCRAT_AUTO(32, "Copy Constructor");
	*this = c;
}

Bureaucrat::Bureaucrat(std::string n, int g): name(n)
{
	_BUREAUCRAT_AUTO(32, "Fields Constructor");
	if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = g;
}

// ------------------------------ Destructor ------------------------------- //
Bureaucrat::~Bureaucrat()
{
	_BUREAUCRAT_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& c)
{
	_BUREAUCRAT_AUTO(32, "Copy Assignement Operator");
	if (this != &c)
	{
		grade = c.grade;
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

// --------------------------------- Methods ------------------------------- //

void Bureaucrat::signForm(AForm &f)
{
	_BUREAUCRAT_AUTO(32, "Sign Form");
	try {
		f.beSigned(*this);
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << this->getName() << " cannot sign " << f.getName() << " because sign grade too low." <<std::endl;
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::incrementGrade()
{
	_BUREAUCRAT_AUTO(32, "Increment Grade");
	try {
		if (grade > 1 && grade < 151)
			grade--;
		else 
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	_BUREAUCRAT_AUTO(32, "Decrement Grade");
	try {
		if (grade > 0 && grade < 150)
			grade++;
		else 
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	_BUREAUCRAT_AUTO(32, "Execute Form");
	try {
		if (this->getGrade() <= form.getGradeExec())
		{
			form.execute(*this);
			std::cout << this->getName() << " executes " << form.getName() << std::endl;
		}
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cerr << this->getName() << " cannot execute " << form.getName() << " because execute grade too low." <<std::endl;
		std::cout << e.what() << std::endl;
	}
}



// --------------------------- Overload Operators -------------------------- //

std::ostream & operator<<(std::ostream & o, Bureaucrat const & a)
{
	o << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
	return o;
}

// --------------------------- Exceptions ---------------------------------- //

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

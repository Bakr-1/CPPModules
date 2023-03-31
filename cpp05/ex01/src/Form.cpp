#include "Form.hpp"

// ----------------------------- Constructors ------------------------------ //
Form::Form(): _name("Default"), _signed(false), _gradeSign(0), _gradeExec(0)
{
	_FORM_AUTO(32, "Default Constructor");
}

Form::Form(const Form& c): _name(c._name), _signed(c._signed), _gradeSign(c._gradeSign), _gradeExec(c._gradeExec)
{
	_FORM_AUTO(32, "Copy Constructor");
	*this = c;
}

Form::Form(std::string name, int gradeSi, int gradeEx): _name(name), _signed(false), _gradeSign(gradeSi), _gradeExec(gradeEx)
{
	_FORM_AUTO(32, "Fields Constructor");
	if (gradeSi > 150 || gradeEx > 150)
		throw Form::GradeTooLowException();
	else if (gradeSi < 1 || gradeEx < 1)
		throw Form::GradeTooHighException();
	else
		std::cout << "Form " << name << " created" << " signing grade " << this->_gradeSign << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Form::~Form()
{
	_FORM_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Form & Form::operator=(const Form& c)
{
	_FORM_AUTO(32, "Copy Assignement Operator");
	if (this != &c)
	{
		this->_signed = c._signed;
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string Form::getName() const
{
	return this->_name;
}

bool Form::getSigned() const
{
	return this->_signed;
}

int Form::getGradeSign() const
{
	return this->_gradeSign;
}

int Form::getGradeExec() const
{
	return this->_gradeExec;
}

// --------------------------------- Methods ------------------------------- //

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->_gradeSign)
	{
		this->_signed = true;
	}
	else
	{
		std::cout << "Form " << this->_name << "  couldn’t sign " << b.getName() << " because his grade is too low" << std::endl;
		throw Form::GradeTooLowException();
	}
}

// ---------------------------- Global Operators ---------------------------- //

std::ostream & operator<<(std::ostream& o, const Form& a)
{
	o << "Form " << a.getName() << " is " << (a.getSigned() ? "signed" : "unsigned") << " and requires a grade of " << a.getGradeSign() << " to be signed and a grade of " << a.getGradeExec() << " to be executed" << std::endl;
	return o;
}

// ------------------------------ Exceptions ------------------------------- //

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}


#include "AForm.hpp"

// ----------------------------- Constructors ------------------------------ //
AForm::AForm(): _name("Default"), _signed(false), _gradeSign(0), _gradeExec(0)
{
	_FORM_AUTO(32, "Default Constructor");
}

AForm::AForm(const AForm& c): _name(c._name), _signed(c._signed), _gradeSign(c._gradeSign), _gradeExec(c._gradeExec)
{
	_FORM_AUTO(32, "Copy Constructor");
	*this = c;
}

AForm::AForm(std::string name, int gradeSi, int gradeEx): _name(name), _signed(false), _gradeSign(gradeSi), _gradeExec(gradeEx)
{
	_FORM_AUTO(32, "Fields Constructor");
	if (gradeSi > 150 || gradeEx > 150)
		throw AForm::GradeTooLowException();
	else if (gradeSi < 1 || gradeEx < 1)
		throw AForm::GradeTooHighException();
	else
		std::cout << "AForm " << name << " created" << " signing grade " << this->_gradeSign << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
AForm::~AForm()
{
	_FORM_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

AForm & AForm::operator=(const AForm& c)
{
	_FORM_AUTO(32, "Copy Assignement Operator");
	if (this != &c)
	{
		this->_signed = c._signed;
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string AForm::getName() const
{
	return this->_name;
}

bool AForm::getSigned() const
{
	return this->_signed;
}

int AForm::getGradeSign() const
{
	return this->_gradeSign;
}

int AForm::getGradeExec() const
{
	return this->_gradeExec;
}

// --------------------------------- Methods ------------------------------- //

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->_gradeSign)
	{
		this->_signed = true;
	}
	else
	{
		std::cout << "AForm " << this->_name << "  couldn’t sign " << b.getName() << " because his grade is too low" << std::endl;
		throw AForm::GradeTooLowException();
	}
}

// ---------------------------- Global Operators ---------------------------- //

std::ostream & operator<<(std::ostream& o, const AForm& a)
{
	o << "AForm " << a.getName() << " is " << (a.getSigned() ? "signed" : "unsigned") << " and requires a grade of " << a.getGradeSign() << " to be signed and a grade of " << a.getGradeExec() << " to be executed" << std::endl;
	return o;
}

// ------------------------------ Exceptions ------------------------------- //

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form not signed";
}
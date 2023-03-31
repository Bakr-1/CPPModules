#include "RobotomyRequestForm.hpp"

// ----------------------------- Constructors ------------------------------ //
RobotomyRequestForm::RobotomyRequestForm(): AForm("Default", 72, 45)
{
	_ROBOTOMYREQUESTFORM_AUTO(32, "Default Constructor");
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& c): AForm(c), _target(c._target)
{
	_ROBOTOMYREQUESTFORM_AUTO(32, "Copy Constructor");
	*this = c;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request Form", 72, 45), _target(target)
{
	_ROBOTOMYREQUESTFORM_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
RobotomyRequestForm::~RobotomyRequestForm()
{
	_ROBOTOMYREQUESTFORM_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& c)
{
	_ROBOTOMYREQUESTFORM_AUTO(32, "Copy Assignement Operator");
	if (this != &c)
	{
		this->_target = c._target;
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void RobotomyRequestForm::execute(Bureaucrat const &execute) const
{
	if (this->_target.length() == 0)
		throw std::out_of_range("No target");
	else if (execute.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " has not been robotomized" << std::endl;
}
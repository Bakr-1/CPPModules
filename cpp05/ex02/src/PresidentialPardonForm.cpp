#include "PresidentialPardonForm.hpp"

// ----------------------------- Constructors ------------------------------ //
PresidentialPardonForm::PresidentialPardonForm(): AForm("Default", 25, 5), _target("Default")
{
	_PRESIDENTIALPARDONFORM_AUTO(32, "Default Constructor");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& c): AForm(c), _target(c._target)
{
	_PRESIDENTIALPARDONFORM_AUTO(32, "Copy Constructor");
	*this = c;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon Form", 25, 5), _target(target)
{
	_PRESIDENTIALPARDONFORM_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
PresidentialPardonForm::~PresidentialPardonForm()
{
	_PRESIDENTIALPARDONFORM_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm& c)
{
	_PRESIDENTIALPARDONFORM_AUTO(32, "Copy Assignement Operator");
	if (this != &c)
	{
		this->_target = c._target;
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //

std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}
// --------------------------------- Methods ------------------------------- //

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->_target.length() == 0)
		throw std::out_of_range("Target is empty");
	else if (this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	else if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;

}


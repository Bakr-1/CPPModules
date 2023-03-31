#include "Intern.hpp"

// ----------------------------- Constructors ------------------------------ //
Intern::Intern()
{
	_INTERN_AUTO(32, "Default Constructor");
}

Intern::Intern(const Intern& c) 
{
	_INTERN_AUTO(32, "Copy Constructor");
	*this = c;
}

// ------------------------------ Destructor ------------------------------- //
Intern::~Intern()
{
	_INTERN_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Intern & Intern::operator=(const Intern& c)
{
	_INTERN_AUTO(32, "Copy Assignement Operator");
	(void)c;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

AForm *Intern::makeForm(std::string const & formName, std::string const & target)
{
	_INTERN_AUTO(32, "makeForm");
	std::string names[3] = {"Robotomy Request", "Presidential Pardon", "Shrubbery Creation"};
	makeFormPtr ptrs[3] = {&Intern::_makeRForm, &Intern::_makePForm, &Intern::_makeSForm};
	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (names[i] == formName)
				return (this->*ptrs[i])(target);
		}
		throw Intern::UnknownFormException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return NULL;
}

AForm* Intern::_makeRForm(std::string const & target)
{
	_INTERN_AUTO(32, "_makeRForm");
	return new RobotomyRequestForm(target);
}

AForm* Intern::_makePForm(std::string const & target)
{
	_INTERN_AUTO(32, "_makePForm");
	return new PresidentialPardonForm(target);
}

AForm* Intern::_makeSForm(std::string const & target)
{
	_INTERN_AUTO(32, "_makeSForm");
	return new ShrubberyCreationForm(target);
}

// ----------------------------- Exceptions -------------------------------- //

const char* Intern::UnknownFormException::what() const throw()
{
	return "Unknown form";
}


#include "ShrubberyCreationForm.hpp"

// ----------------------------- Constructors ------------------------------ //
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation Form", 145, 137), _target("Classified")
{
	_SHRUBBERYCREATIONFORM_AUTO(32, "Default Constructor");
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& c): AForm(c), _target(c._target)
{
	_SHRUBBERYCREATIONFORM_AUTO(32, "Copy Constructor");
	*this = c;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
	_SHRUBBERYCREATIONFORM_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	_SHRUBBERYCREATIONFORM_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& c)
{
	_SHRUBBERYCREATIONFORM_AUTO(32, "Copy Assignement Operator");
	if (this != &c)
	{
		this->_target = c._target;
	}
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->_target.length() == 0)
		throw std::out_of_range("No target");
	else if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	else
	{
		std::ofstream file;

		file.open((this->_target + "_shrubbery").c_str(), std::fstream::trunc | std::fstream::out);
		if (!file.is_open())
			throw std::runtime_error("File could not be opened");
		file << "         v" << std::endl;
		file << "        >X<" << std::endl;
		file << "         A" << std::endl;
		file << "        d$b" << std::endl;
		file << "      .d\\$$b." << std::endl;
		file << "    .d$i$$\\$$b." << std::endl;
		file << "   .d$$@b\\$$$ib." << std::endl;
		file << "  .d$$i$$b\\$$$$b." << std::endl;
		file << "  d$$$$@$b\\$$$$$i" << std::endl;
		file << " d$$$$$$@b\\$$$$$$b" << std::endl;
		file << "($$$$$$$$@b$$$$$$$)" << std::endl;
		file << " $$$$$$$$$$$$$$$$$" << std::endl;
		file << "  $$$$$$$$$$$$$$$" << std::endl;
		file << "   $$$\"\"\"\"\"\"\"\"$$$" << std::endl;
		file << "    $         $" << std::endl;
		file << "     $       $" << std::endl;
		file << "      $     $" << std::endl;
		file << "       $   $" << std::endl;
		file << "        $ $" << std::endl;
		file << "         $" << std::endl;
		file.close();

	}
}

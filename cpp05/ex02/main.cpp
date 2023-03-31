# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat Brad("Albert Einstein", 1);
	Bureaucrat Chad("Mother Teresa", 150);
	ShrubberyCreationForm Jadion("Jadion");
	RobotomyRequestForm Hoo("Hoo");
	PresidentialPardonForm Boo("Boo");

	// ++++++++++++++++++++++++++++++++++++++++++++++++++++++
	std::cout << "=====================================================================" << std::endl;
	Chad.signForm(Jadion);
	std::cout << Jadion << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Chad.executeForm(Jadion);
	std::cout << Jadion << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Brad.signForm(Jadion);
	std::cout << Jadion << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Brad.executeForm(Jadion);
	std::cout << Jadion << std::endl;
	std::cout << "=====================================================================" << std::endl;
	// ++++++++++++++++++++++++++++++++++++++++++++++++++++++
	std::cout << "=====================================================================" << std::endl;
	Chad.executeForm(Hoo);
	std::cout << Hoo << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Chad.signForm(Hoo);
	std::cout << Hoo << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Brad.signForm(Hoo);
	std::cout << Hoo << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Brad.executeForm(Hoo);
	std::cout << Hoo << std::endl;
	std::cout << "=====================================================================" << std::endl;
	// ++++++++++++++++++++++++++++++++++++++++++++++++++++++
	std::cout << "=====================================================================" << std::endl;
	Chad.executeForm(Boo);
	std::cout << Boo << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Chad.signForm(Boo);
	std::cout << Boo << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Brad.signForm(Boo);
	std::cout << Boo << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Brad.executeForm(Boo);
	std::cout << Boo << std::endl;
	std::cout << "=====================================================================" << std::endl;
	// ++++++++++++++++++++++++++++++++++++++++++++++++++++++
    return (0);
}

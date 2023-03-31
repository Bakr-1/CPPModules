#include "Brain.hpp"

// ----------------------------- Constructors ------------------------------ //
Brain::Brain()
{
	for(int i = 0; i < 100; i++)
		ideas[i] = "Hello world";
	_BRAIN_AUTO(32, "Default Constructor");
}

Brain::Brain(const Brain& c)
{
	*this = c;
	_BRAIN_AUTO(32, "Copy Constructor");
}

// ------------------------------ Destructor ------------------------------- //
Brain::~Brain()
{
	_BRAIN_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Brain & Brain::operator=(const Brain& c)
{
	_BRAIN_AUTO(32, "Copy Assignement Operator");
	for(int i = 0; i < 100; i++)
		ideas[i] = c.get_ideas(i);
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string Brain::get_ideas(int i) const
{
	if (i < 0 || i >= 100)
	{
		std::cout << "Index out of range" << std::endl;
		return ("");
	}
	return ideas[i];
}
void Brain::set_ideas(std::string input, int i)
{
	if (i < 0 || i >= 100)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	ideas[i] = input;
}



// --------------------------------- Methods ------------------------------- //


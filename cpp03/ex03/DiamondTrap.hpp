#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
// ----------------------------- Constructors ------------------------------ //
	DiamondTrap();	// Default Constructor
	DiamondTrap(std::string name);	// Fields Constructor
	DiamondTrap(const DiamondTrap& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~DiamondTrap();	// Destructor

// ------------------------------- Operators ------------------------------- //
	DiamondTrap & operator=(const DiamondTrap& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	void	whoAmI();
	using ScavTrap::attack;
private:
	std::string _Name;

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _DIAMONDTRAP_ARGS ""
#  define _DIAMONDTRAP_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			<< TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			<< _DIAMONDTRAP_ARGS  \
			<< "}" << std::endl;
# else

#  define _DIAMONDTRAP_AUTO(x, y) ;
#  define _DIAMONDTRAP_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* DIAMONDTRAP_HPP */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
// ----------------------------- Constructors ------------------------------ //
	ScavTrap();	// Default Constructor
	ScavTrap(std::string name);	// Fields Constructor
	ScavTrap(const ScavTrap& c);	// Copy Constructor
// ------------------------------ Destructor ------------------------------- //
	~ScavTrap();	// Destructor
// ------------------------------- Operators ------------------------------- //
	ScavTrap & operator=(const ScavTrap& a);
	// Copy Assignement Operator
// --------------------------- Getters && Setters -------------------------- //

// --------------------------------- Methods ------------------------------- //
	void	attack(std::string const & target);
	void	guardGate();
};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _SCAVTRAP_ARGS ""
#  define _SCAVTRAP_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			<< TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			<< _SCAVTRAP_ARGS  \
			<< "}" << std::endl;
# else

#  define _SCAVTRAP_AUTO(x, y) ;
#  define _SCAVTRAP_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* SCAVTRAP_HPP */

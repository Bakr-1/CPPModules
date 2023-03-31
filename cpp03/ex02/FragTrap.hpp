#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	FragTrap();	// Default Constructor
	FragTrap(const std::string name);	// Fields Constructor
	FragTrap(const FragTrap& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~FragTrap();	// Destructor

// ------------------------------- Operators ------------------------------- //
	FragTrap & operator=(const FragTrap& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	void	highFivesGuys();	
};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _FRAGTRAP_ARGS ""
#  define _FRAGTRAP_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << _FRAGTRAP_ARGS  \
			  << "}" << std::endl;
# else

#  define _FRAGTRAP_AUTO(x, y) ;
#  define _FRAGTRAP_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* FRAGTRAP_HPP */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class ClapTrap
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	ClapTrap();	// Default Constructor
	ClapTrap(std::string in_Name);	// Fields Constructor
	ClapTrap(const ClapTrap& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~ClapTrap();	// Destructor

// ------------------------------- Operators ------------------------------- //
	ClapTrap & operator=(const ClapTrap& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string get_Name() const;
	void set_Name(std::string input);
	
	int get_HitPoints() const;
	void set_HitPoints(int input);
	
	int get_EnergyPoints() const;
	void set_EnergyPoints(int input);
	
	int get_AttackDamage() const;
	void set_AttackDamage(int input);
	

// --------------------------------- Methods ------------------------------- //

void	attack(std::string const & target);
void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);


private:
	std::string Name;
	int HitPoints;
	int EnergyPoints;
	int AttackDamage;

};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _CLAPTRAP_ARGS _ARG(Name) << _ARG(HitPoints) << _ARG(EnergyPoints) << _ARG(AttackDamage)
#  define _CLAPTRAP_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << _CLAPTRAP_ARGS  \
			  << "}" << std::endl;
# else

#  define _CLAPTRAP_AUTO(x, y) ;
#  define _CLAPTRAP_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* CLAPTRAP_HPP */

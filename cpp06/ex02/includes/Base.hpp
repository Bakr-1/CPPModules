#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include <limits>
# include <stdint.h>
# include <numbers>
# include <iomanip>

class Base
{
	public:
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate(void);
void identify_from_pointer(Base* p);
void identify_from_reference(Base& p);


#endif /* CONVERT_HPP */

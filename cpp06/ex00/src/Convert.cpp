#include "Convert.hpp"

// ----------------------------- Constructors ------------------------------ //
Convert::Convert()
{
	_CONVERT_AUTO(32, "Default Constructor");
}

Convert::Convert(const Convert& c) 
{
	_CONVERT_AUTO(32, "Copy Constructor");
	*this = c;
}

// ------------------------------ Destructor ------------------------------- //
Convert::~Convert()
{
	_CONVERT_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Convert & Convert::operator=(const Convert& c)
{
	_CONVERT_AUTO(32, "Copy Assignement Operator");
	if (this == &c)
		return *this;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void	Convert::convert(std::string str, int *Integer, float *Float, double *Double, char *Char)
{
	_CONVERT_AUTO(32, "Convert");
	*Integer = std::atoi(str.c_str());
	*Float = std::atof(str.c_str());
	*Double = std::atof(str.c_str());
	*Char = static_cast<char>(*Integer);
}

void	Convert::printChar()
{
	_CONVERT_AUTO(32, "Print Char");
	std::cout << "char: ";
	if (std::isprint(_Char))
		std::cout << "'" << _Char << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	Convert::printInt()
{
	_CONVERT_AUTO(32, "Print Int");
	std::cout << "int: ";
	if (_Integer >= std::numeric_limits<int>::min() && _Integer <= std::numeric_limits<int>::max())
		std::cout << _Integer << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::printFloat()
{
	_CONVERT_AUTO(32, "Print Float");
	std::cout << "float: ";
	if (_Float >= std::numeric_limits<float>::min() && _Float <= std::numeric_limits<float>::max())
	{
		if (std::isnan(_Float))
			std::cout << "nanf" << std::endl;
		else if (std::isinf(_Float))
			std::cout << "inff" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << _Float << "f" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::printDouble()
{
	_CONVERT_AUTO(32, "Print Double");
	std::cout << "double: ";
	if (_Double >= std::numeric_limits<double>::min() && _Double <= std::numeric_limits<double>::max())
	{
		if (std::isnan(_Double))
			std::cout << "nan" << std::endl;
		else if (std::isinf(_Double))
			std::cout << "inf" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << _Double << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Span(void);	// Default Constructor
	Span(unsigned int);	// Fields Constructor
	Span(const Span& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Span(void);	// Destructor

// ------------------------------- Operators ------------------------------- //
	Span & operator=(const Span& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	
	

// --------------------------------- Methods ------------------------------- //
	void addNumber(int);
	int shortestSpan(void);
	int longestSpan(void);
private:
	std::vector<int> *_v;
	unsigned int _i;
public:
	class SpanFullException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class SpanEmptyException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _SPAN_ARGS _ARG(_i) ""
#  define _SPAN_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "[\033[34;47m" << this                         \
			  << "\033[0m]\033[0m: " << _SPAN_ARGS  \
			  << "}" << std::endl;
# else

#  define _SPAN_AUTO(x, y) ;
#  define _SPAN_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

#endif /* SPAN_HPP */

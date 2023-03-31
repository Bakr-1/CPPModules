#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>



# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _WHATEVER_ARGS ""
#  define _WHATEVER_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "\033[0m]\033[0m: " << _WHATEVER_ARGS  \
			  << "}" << std::endl;
# else

#  define _WHATEVER_AUTO(x, y) ;
#  define _WHATEVER_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */
template <typename T> void swap(T &a, T &b) {
	_WHATEVER_AUTO(32, "swap");
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T min(T const &a, T const &b) {
	_WHATEVER_AUTO(32, "min");
	return (a < b ? a : b);
}

template <typename T> T max(T const &a, T const &b) {
	_WHATEVER_AUTO(32, "max");
	return (a > b ? a : b);
}

#endif /* WHATEVER_HPP */

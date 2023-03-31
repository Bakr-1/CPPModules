#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

# ifndef NO_DEBUG

#  ifndef _ARG
#   define _ARG(arg) #arg << "(" << arg << ") "
#  endif /* _ARG */

#  define _ITER_ARGS ""
#  define _ITER_AUTO(COLOR_CODE, TEXT) \
	std::cout << "{ \e[" << COLOR_CODE << ";1m"                 \
			  << TEXT << " " << __PRETTY_FUNCTION__ << "\e[0m " \
			  << "\033[0m]\033[0m: " << _ITER_ARGS  \
			  << "}" << std::endl;
# else

#  define _ITER_AUTO(x, y) ;
#  define _ITER_ARGS ""
#  define _ARG ""

# endif /* NO_DEBUG */

template <typename T> void iter (T *array, size_t len, void (*f)(T const &))
{
	_ITER_AUTO(32, "iter");
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}


#endif /* ITER_HPP */

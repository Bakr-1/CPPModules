#ifndef MUNTANTSTACK_HPP
# define MUNTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>
# 
template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>() {}
	MutantStack(MutantStack const &src) : std::stack<T>(src) {}
	~MutantStack(void) { std::stack<T>::c.clear();}

	MutantStack &operator=(MutantStack const &rhs)
	{
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return *this;
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void) { return std::stack<T>::c.begin(); }
	iterator end(void) { return std::stack<T>::c.end(); }

};

#endif
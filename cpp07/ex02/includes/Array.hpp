#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	T *_array;
	size_t _size;

public:
	Array(void) : _array(new T[0]), _size(0) {}
	Array(unsigned int n) : _array(new T[n]), _size(n) {}
	Array(Array const &src) : _array(new T[src._size]), _size(src._size)
	{
		for (size_t i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}
	~Array(void) { delete[] _array; }

	Array &operator=(Array const &rhs)
	{
		if (this != &rhs)
		{
			delete[] _array;
			_array = new T[rhs._size];
			_size = rhs._size;
			for (size_t i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
		}
		return *this;
	}

	T &operator[](size_t i)
	{
		if (i < 0 || i >= _size)
			throw std::exception();
		return _array[i];
	}

	size_t size(void) const { return _size; }
};

#endif
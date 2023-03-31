#include "Span.hpp"

// ----------------------------- Constructors ------------------------------ //
Span::Span()
{
	_SPAN_AUTO(32, "Default Constructor");
}

Span::Span(const Span& c) : _i(c._i)
{
	_SPAN_AUTO(32, "Copy Constructor");
	*this = c;
}

Span::Span(unsigned int i) : _i(i)
{
	this->_v = new std::vector<int>();
	_SPAN_AUTO(32, "Fields Constructor");
}

// ------------------------------ Destructor ------------------------------- //
Span::~Span()
{
	delete this->_v;
	_SPAN_AUTO(31, "Destructor called");
}
// ------------------------------- Operators ------------------------------- //

Span & Span::operator=(const Span& c)
{
	_SPAN_AUTO(32, "Copy Assignement Operator");
	_i = c._i;
	if (this->_v)
		delete this->_v;
	this->_v = new std::vector<int>(*c._v);
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void Span::addNumber(int i)
{
	if (this->_v->size() >= this->_i)
		throw Span::SpanFullException();
	this->_v->push_back(i);
}

int Span::shortestSpan(void)
{
	if (this->_v->size() <= 1)
		throw Span::SpanEmptyException();
	std::vector<int> v = *this->_v;
	std::sort(v.begin(), v.end());
	int min = v[1] - v[0];
	for (size_t i = 1; i < v.size() - 1; i++)
	{
		if (v[i + 1] - v[i] < min)
			min = v[i + 1] - v[i];
	}
	return min;
}

int Span::longestSpan(void)
{
	if (this->_v->size() <= 1)
		throw Span::SpanEmptyException();
	std::vector<int> v = *this->_v;
	std::sort(v.begin(), v.end());
	return v[v.size() - 1] - v[0];
}

// ----------------------------- Constructors ------------------------------ //

const char * Span::SpanFullException::what() const throw()
{
	return "Span is full";
}

const char * Span::SpanEmptyException::what() const throw()
{
	return "Span is empty";
}
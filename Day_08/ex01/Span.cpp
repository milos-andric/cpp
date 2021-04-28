#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _size(0)
{
}

Span::Span(unsigned int nbr) : _size(nbr)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_set = rhs.getSet();
		this->_size = rhs.getSize();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void 	Span::addNumber(int num)
{
	if (_set.size() < _size)
		_set.insert(num);
	else
		throw ManyNumbersException();
}

void 	Span::print(void)
{
	std::multiset<int>::iterator it;
	it = _set.begin();
	for(; it != _set.end() ; it++)
		std::cout << "int : " << *it << std::endl;
	return;
}

int 	Span::shortestSpan(void)
{
	if (_size <= 1)
		throw	NoNumbersException();
	int diff = 1000000; // changer pour longest span
	std::multiset<int>::iterator it;
	std::multiset<int>::iterator it2;
	it = _set.begin();
	it2 = it;
	it2++;
	while(it2 != _set.end())
	{
		if ((*it2 - *it) < diff)
			diff = (*it2 - *it);
		it++;
		it2++;
	}
	return(diff);
}

int		Span::longestSpan(void)
{
	if (_size <= 1)
		throw	NoNumbersException();
	std::multiset<int>::iterator it;
	std::multiset<int>::iterator it2;
	it = _set.begin();
	it2 = _set.end();
	it2--;
	return(*it2 - *it);

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::multiset<int>	Span::getSet(void) const
{
	return(_set);
}

unsigned int	Span::getSize(void) const
{
	return(_size);
}

/* ************************************************************************** */

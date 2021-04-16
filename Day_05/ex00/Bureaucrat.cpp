#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
	_name = "Bertrand";
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, unsigned char grade)
{
	_name = name;

}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void				change_grade(unsigned char lvl)
{

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string 		Bureaucrat::getName() const 
{
	return(_name);
}

unsigned char 		Bureaucrat::getGrade() const
{
	return(_grade);
}

/* ************************************************************************** */
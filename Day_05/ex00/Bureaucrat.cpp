#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("bertrand")
{
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	
	_grade = grade;
	
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src.getName())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() throw()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
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

void				Bureaucrat::change_grade(int lvl)
{
	if (lvl <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (lvl > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = lvl;
}

void				Bureaucrat::inc_lvl(void)
{
	this->change_grade(this->_grade - 1);
}

void				Bureaucrat::dec_lvl(void)
{
	this->change_grade(this->_grade + 1);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string 		Bureaucrat::getName() const 
{
	return(_name);
}

int 				Bureaucrat::getGrade() const
{
	return(_grade);
}

/* ************************************************************************** */
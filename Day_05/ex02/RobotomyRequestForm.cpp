#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("default Robotomy form", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45)
{
	this->_target = name;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm() throw()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
		this->setSignStatus(rhs.getSignStatus());
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::action(Bureaucrat const & executor) const
{
	static unsigned int i = 0;
	int res;

    i += 7;
    srand(time(NULL) + i);
    res = (rand() % 2);
	
	(void)executor;
	std::cout << "*BZzZzzzzzzz ZzzzzZZzzZZzzzzz* : ";
	if (res)
		std::cout << _target << " has been sucessfully robotomized !" << std::endl;
	else
		std::cout << _target << " did not robotomize correctly..." << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	RobotomyRequestForm::getTarget(void) const
{
	return(this->_target);
}

/* ************************************************************************** */
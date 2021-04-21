#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("default Robotomy form", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src)
{
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
		this->_signed = rhs.getSignStatus();
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::action(Bureaucrat const & executor) const
{
	static unsigned int i = 0;
	int res;

    i += 3;
    srand(time(NULL) + i);
    res = (rand() % 4);
	
	(void)executor;
	std::cout << "*BZzZzzzzzzz ZzzzzZZzzZZzzzzz* : ";
	if ((res % 2) <= 2)
		std::cout << _name << " has been sucessfully robotomized !" << std::endl;
	else
		std::cout << _name << " did not robotomize correctly..." << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
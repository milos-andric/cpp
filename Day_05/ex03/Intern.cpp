#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form *	retShru(std::string name)
{
	return(new ShrubberyCreationForm(name));
}

Form *	retPres(std::string name)
{
	return(new PresidentialPardonForm(name));
}

Form *	retRobo(std::string name)
{
	return(new RobotomyRequestForm(name));
}

Form *	Intern::makeForm(std::string type, std::string name)
{
	std::string types[3] = {"robotomy request", "pardon request", "shrubbery request"};
	Form		*(*make[3])(std::string name) = { retRobo, retPres, retShru };

	for(int i = 0; i < 3; i++)
	{
		if (types[i] == type)
		{
			std::cout << "Intern creates a " << types[i] << std::endl;
			return(make[i](name)); 
		}
	}
	std::cout << "form type not found" << std::endl;
	return(NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("default Shrubbbbery form", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137)
{
	this->_target = name;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm() throw()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
		this->setSignStatus(rhs.getSignStatus());
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void					ShrubberyCreationForm::action(Bureaucrat const & executor) const
{
	(void)executor;
	std::ofstream outfile(_target + "_shrubbery.txt");

	outfile << "	        _-_		" << std::endl;
	outfile << "	     /~~   ~~\\		" << std::endl;
	outfile << "	  /~~         ~~\\		" << std::endl;
	outfile << "	 {               }		" << std::endl;
	outfile << "	  \\  _-     -_  /		" << std::endl;
	outfile << "	    ~  \\ //  ~		" << std::endl;
	outfile << "	 _- -   | | _- _		" << std::endl;
	outfile << "	   _ -  | |   -_		" << std::endl;
	outfile << "	       // \\		" << std::endl;

	outfile.close();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return(this->_target);
}

/* ************************************************************************** */
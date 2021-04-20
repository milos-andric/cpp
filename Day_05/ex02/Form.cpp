#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("basic form"), _sign_lvl(150), _exec_lvl(150)
{
	_signed = false;
}

Form::Form(std::string name, int sign, int exec) : _name(name), _signed(false), _sign_lvl(sign), _exec_lvl(exec)
{
	if ((sign <= 0) || (exec <= 0))
		throw GradeTooHighException();
	if ((sign > 150) || (exec > 150))
		throw GradeTooLowException();
}

Form::Form( const Form & src ) : _name(src._name),  _signed(src._signed), _sign_lvl(src._sign_lvl), _exec_lvl(src._exec_lvl)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form() throw()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs.getSignStatus();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form : [" << i.getName() << "] signable by : lvl " << i.getSignLvl() << " and exectuable by minions of lvl " << i.getExecLvl() << "is signed ? : " << i.getSignStatus() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Form::beSigned(Bureaucrat & b)
{
	if (b.getGrade() <= this->_sign_lvl)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

void			Form::execute(Bureaucrat const & executor) const
{
	if (this->_signed == false)
		throw NotSignedException();
	if (executor.getGrade() > this->_exec_lvl)
		throw GradeTooLowException();
	action(executor);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Form::getName(void) const
{
	return(_name);
}

int	Form::getSignLvl(void) const
{
	return(_sign_lvl);
}

int	Form::getExecLvl(void) const
{
	return(_exec_lvl);
}

bool			Form::getSignStatus(void) const
{
	return(_signed);
}

/* ************************************************************************** */
#include "AssaultTerminator.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( const AssaultTerminator & src )
{
	(void)src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AssaultTerminator &				AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
	(void)rhs;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, AssaultTerminator const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine* AssaultTerminator::clone() const
{
	AssaultTerminator* copy = new AssaultTerminator();
	return (copy);
}

void	AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cout << " attacks with chainfists *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
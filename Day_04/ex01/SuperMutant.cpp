#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
	return;
}

SuperMutant::SuperMutant( const SuperMutant & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	if ( this != &rhs )
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, SuperMutant const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	SuperMutant::takeDamage(int damage)
{
	if ((damage -= 3) < 0)
		damage = 0;
	if ((this->_hp - damage) < 0)
		this->_hp = 0;
	else
		this->_hp -= damage;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
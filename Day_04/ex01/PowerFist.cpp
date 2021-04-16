#include "PowerFist.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PowerFist::PowerFist()
{
	_name = "Power Fist";
	_damage = 50;
	_apCost = 8;
	_sound = "* pschhh... SBAM ! *";
}

PowerFist::PowerFist( const PowerFist & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PowerFist::~PowerFist()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PowerFist &				PowerFist::operator=( PowerFist const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_sound = rhs.getSound();
		this->_damage = rhs.getDamage();
		this->_apCost = rhs.getAPCost();
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, PowerFist const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void		PowerFist::attack(void) const
{
	std::cout << this->_sound << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
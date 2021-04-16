#include "PlasmaRifle.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle()
{
	_name = "Plasma Rifle";
	_damage = 21;
	_apCost = 5;
	_sound = "* piouuu piouuu piouuu *";
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PlasmaRifle &				PlasmaRifle::operator=( PlasmaRifle const & rhs )
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

// std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void		PlasmaRifle::attack(void) const
{
	std::cout << this->_sound << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
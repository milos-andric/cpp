#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon()
{
	return;
}

AWeapon::AWeapon( const AWeapon & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_apCost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			AWeapon::getName(void) const
{
	return(this->_name);
}

int					AWeapon::getAPCost(void) const
{
	return(this->_apCost);
}

int					AWeapon::getDamage(void) const
{
	return(this->_damage);
}

std::string					AWeapon::getSound(void) const
{
	return(this->_sound);
}

/* ************************************************************************** */
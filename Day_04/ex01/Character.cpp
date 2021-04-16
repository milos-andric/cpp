#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string const & name)
{
	this->_name = name;
	this->_ap = 40;
	this->_weapon = NULL;
}

Character::Character( const Character & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_weapon = rhs.getWeapon();
		this->_ap = rhs.getAP();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	if (i.getWeapon())
		o << i.getName() << " has " << i.getAP() << " AP and wields " << (i.getWeapon())->getName() << std::endl;
	else
		o << i.getName() << " has " << i.getAP() << " AP and is unarmed" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::recoverAP(void)
{
	if ((this->_ap + 10) <= 40)
		this->_ap += 10;
	else
		this->_ap = 40;
	return;
}

void Character::equip(AWeapon* weapon)
{
	if (weapon != NULL)
	{
		this->_weapon = weapon;
	}
}

void Character::attack(Enemy* target)
{
	if (_weapon != NULL)
	{
		if (this->_ap >= _weapon->getAPCost())
		{
			this->_ap -= _weapon->getAPCost();
			std::cout << this->_name << " attacks " << target->getType() << " with a " << this->_weapon->getName() << std::endl;
			_weapon->attack();
			target->takeDamage(this->_weapon->getDamage());
			if (target->getHP() == 0)
				delete target;
		}
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const	Character::getName(void) const
{
	return(this->_name);
}

AWeapon *			Character::getWeapon() const
{
	return(this->_weapon);
}

int					Character::getAP(void) const
{
	return(this->_ap);
}

/* ************************************************************************** */
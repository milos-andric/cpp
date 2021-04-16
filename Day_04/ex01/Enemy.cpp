#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Enemy::Enemy(int hp, std::string const & type)
{
	this->_hp = hp;
	this->_type = type;
}

Enemy::Enemy( const Enemy & src )
{
	*this = src;
}

Enemy::Enemy()
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	if ( this != &rhs )
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Enemy const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


int Enemy::getHP() const
{
	return(this->_hp);
}

std::string Enemy::getType() const
{
	return(this->_type);
}

void		Enemy::takeDamage(int damage)
{
	if (damage < 0)
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
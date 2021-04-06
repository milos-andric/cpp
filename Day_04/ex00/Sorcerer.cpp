/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:48:29 by mandric           #+#    #+#             */
/*   Updated: 2021/03/25 13:21:48 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer()
{
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << name << ", " << title << " is born !" << std::endl;
	return;
}

Sorcerer::Sorcerer( const Sorcerer & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", " <<  i.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Sorcerer::polymorph(Victim const & i) const
{
	i.getPolymorphed();
}

void			Sorcerer::polymorph(Peon const & i) const
{
	i.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Sorcerer::getName() const
{
	return(_name);
}

std::string		Sorcerer::getTitle() const
{
	return(_title);
}

/* ************************************************************************** */
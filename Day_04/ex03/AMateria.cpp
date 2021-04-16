/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbajrami <tbajrami@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:09:16 by tbajrami          #+#    #+#             */
/*   Updated: 2021/02/09 13:37:32 by tbajrami         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _xp(0), _type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &ref)
{
    this->_xp = ref._xp;
    this->_type = ref._type;
}

AMateria       &AMateria::operator=(const AMateria &rhs)
{
    this->_xp = rhs.getXP();
    this->_type = rhs.getType();
    return *this;
}


std::string const   &AMateria::getType() const
{
    return this->_type;
}

unsigned int        AMateria::getXP() const
{
    return this->_xp;
}

void                AMateria::setXP(unsigned int xp)
{
    this->_xp = xp;
}

void                AMateria::setType(std::string type)
{
    this->_type = type;
}

void     AMateria::use(ICharacter& target)
{
    (void)target;
}
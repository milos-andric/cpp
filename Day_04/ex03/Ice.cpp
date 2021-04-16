/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbajrami <tbajrami@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:19:13 by tbajrami          #+#    #+#             */
/*   Updated: 2021/02/09 12:27:55 by tbajrami         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &ref) : AMateria("ice")
{
    this->setXP(ref.getXP());
}

Ice     &Ice::operator=(const Ice &rhs)
{
    this->setXP(rhs.getXP());
    return *this;
}

AMateria *Ice::clone() const
{
    AMateria *b = new Ice;
    b->setXP(this->getXP());
    return (b);
}

void     Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    this->setXP(this->getXP() + 10);
}
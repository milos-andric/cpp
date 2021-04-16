/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbajrami <tbajrami@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:33:44 by tbajrami          #+#    #+#             */
/*   Updated: 2021/02/09 12:37:36 by tbajrami         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &ref) : AMateria("cure")
{
    this->setXP(ref.getXP());
}

Cure     &Cure::operator=(const Cure &rhs)
{
    this->setXP(rhs.getXP());
    return *this;
}

AMateria *Cure::clone() const
{
    AMateria *b = new Cure();
    b->setXP(this->getXP());
    return (b);
}

void        Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    this->setXP(this->getXP() + 10);
}
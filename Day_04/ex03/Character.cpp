/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:04:54 by tbajrami          #+#    #+#             */
/*   Updated: 2021/04/12 12:41:53 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) : ICharacter()
{
    this->_name = name;
    this->_inv[0] = NULL;
    this->_inv[1] = NULL;
    this->_inv[2] = NULL;
    this->_inv[3] = NULL;
}

Character::~Character() 
{
    if (this->_inv[0])
        delete this->_inv[0];
    if (this->_inv[1])
        delete this->_inv[1];
    if (this->_inv[2])
        delete this->_inv[2];
    if (this->_inv[3])
        delete this->_inv[3];
}

Character::Character(const Character &ref) : ICharacter()
{
    this->_name = ref.getName();
    this->_inv[0] = NULL;
    this->_inv[1] = NULL;
    this->_inv[2] = NULL;
    this->_inv[3] = NULL;
    if (ref.getEquip(0))
        this->_inv[0] = ref.getEquip(0)->clone();
    if (ref.getEquip(1))
        this->_inv[1] = ref.getEquip(0)->clone();
    if (ref.getEquip(2))
        this->_inv[2] = ref.getEquip(0)->clone();
    if (ref.getEquip(3))
        this->_inv[3] = ref.getEquip(0)->clone();
}

Character &Character::operator=(const Character &rhs)
{
    this->_name = rhs.getName();
    if (this->_inv[0])
        delete this->_inv[0];
    if (this->_inv[1])
        delete this->_inv[1];
    if (this->_inv[2])
        delete this->_inv[2];
    if (this->_inv[3])
        delete this->_inv[3];
    this->_inv[0] = NULL;
    this->_inv[1] = NULL;
    this->_inv[2] = NULL;
    this->_inv[3] = NULL;
    if (rhs.getEquip(0))
        this->_inv[0] = rhs.getEquip(0)->clone();
    if (rhs.getEquip(1))
        this->_inv[1] = rhs.getEquip(0)->clone();
    if (rhs.getEquip(2))
        this->_inv[2] = rhs.getEquip(0)->clone();
    if (rhs.getEquip(3))
        this->_inv[3] = rhs.getEquip(0)->clone();
    return *this;
}

AMateria    *Character::getEquip(int index) const
{
    return this->_inv[index];
}

void        Character::setEquip(int index, AMateria *m)
{
    this->_inv[index] = m;
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    if (!this->getEquip(0))
        this->setEquip(0, m);
    else if (!this->getEquip(1))
        this->setEquip(1, m);
    else if (!this->getEquip(2))
        this->setEquip(2, m);
    else if (!this->getEquip(3))
        this->setEquip(3, m);
}

void Character::unequip(int idx)
{
    this->setEquip(idx, NULL);
}

void Character::use(int idx, ICharacter& target)
{
    if ((idx < 0) || (idx >= 4))
        return;
    if (this->_inv[idx])
        this->_inv[idx]->use(target);
}
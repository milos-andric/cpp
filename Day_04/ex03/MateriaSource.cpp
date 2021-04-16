/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:00:47 by tbajrami          #+#    #+#             */
/*   Updated: 2021/04/12 12:47:42 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->_inv[0] = NULL;
    this->_inv[1] = NULL;
    this->_inv[2] = NULL;
    this->_inv[3] = NULL;
}

MateriaSource::~MateriaSource()
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

MateriaSource::MateriaSource(const MateriaSource &ref)
{
    *this = ref;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    if (this->_inv[0])
        delete this->_inv[0];
    if (this->_inv[1])
        delete this->_inv[1];
    if (this->_inv[2])
        delete this->_inv[2];
    if (this->_inv[3])
        delete this->_inv[3];
    if (rhs.getEquip(0) != NULL)
        this->_inv[0] = rhs.getEquip(0)->clone();
    if (rhs.getEquip(1) != NULL)
        this->_inv[1] = rhs.getEquip(1)->clone();
    if (rhs.getEquip(2) != NULL)
        this->_inv[2] = rhs.getEquip(2)->clone();
    if (rhs.getEquip(3) != NULL)
        this->_inv[3] = rhs.getEquip(3)->clone();
    return *this;
}

AMateria    *MateriaSource::getEquip(int index) const
{
    return this->_inv[index];
}

void        MateriaSource::learnMateria(AMateria *ref)
{
    if (!this->_inv[0])
        this->_inv[0] = ref;
    else if (!this->_inv[1])
        this->_inv[1] = ref;
    else if (!this->_inv[2])
        this->_inv[2] = ref;
    else if (!this->_inv[3])
        this->_inv[3] = ref;
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 3 ; i >= 0 ; i--)
    {
        if (this->_inv[i] && this->_inv[i]->getType() == type)
            return(this->_inv[i]->clone());
    }
    return 0;
}
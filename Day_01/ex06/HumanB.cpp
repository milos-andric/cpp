/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:22:18 by mandric           #+#    #+#             */
/*   Updated: 2021/03/18 11:20:19 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
    return;
}

HumanB::~HumanB(void)
{
    return;
}

void    HumanB::attack(void)
{
    if (this->weapon)
        std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " attacks with bare fists" << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
    return;
}
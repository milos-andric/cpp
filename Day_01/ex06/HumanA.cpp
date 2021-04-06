/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:07:42 by mandric           #+#    #+#             */
/*   Updated: 2021/03/18 11:17:00 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
    return;
}

HumanA::~HumanA(void)
{
    return;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
    return;
}

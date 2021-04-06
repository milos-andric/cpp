/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:50:30 by mandric           #+#    #+#             */
/*   Updated: 2021/03/17 08:44:26 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie()
{
    return;
}

void Zombie::advert(void) const {

    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss ..." << std::endl;
    return;
}

void Zombie::rename(std::string name) {

    this->name = name;
    return;
}

void Zombie::retype(std::string type) {

    this->type = type;
    return;
}

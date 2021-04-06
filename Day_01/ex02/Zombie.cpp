/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:50:30 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 15:38:18 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
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
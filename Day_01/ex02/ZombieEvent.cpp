/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:00:44 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 15:38:15 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    this->curr_type = "normal";
    return;
}

ZombieEvent::~ZombieEvent()
{
    return;
}

void ZombieEvent::setZombieType(std::string type)
{
    this->curr_type = type;
    return;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *retour = new Zombie(name, this->curr_type);
    return (retour);
}

Zombie *ZombieEvent::randomChump(void)
{
    Zombie *retour;
    srand(time(NULL));
    std::string Zname = std::to_string(rand() % 999999);
    retour = newZombie(Zname);
    return (retour);
}
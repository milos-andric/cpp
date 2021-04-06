/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:52:31 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 15:14:30 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{

public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string name);
    Zombie *newZombie(std::string name);
    Zombie *randomChump(void);
    void announce(void);

private:
    std::string curr_type;
};

#endif
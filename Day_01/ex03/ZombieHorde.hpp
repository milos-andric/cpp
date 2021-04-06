/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:52:31 by mandric           #+#    #+#             */
/*   Updated: 2021/03/17 08:42:57 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{

public:
    ZombieHorde(int n);
    ~ZombieHorde();
    void announce(void);


private:

    Zombie *horde;
    std::string curr_type;
    Zombie *randomChump(int n);
    Zombie *rename_zombies(Zombie *horde, int n);
    void    advertHorde(Zombie *horde, int n) const;
};

#endif
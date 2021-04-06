/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:00:44 by mandric           #+#    #+#             */
/*   Updated: 2021/03/18 10:58:08 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    this->horde = randomChump(n);
    return;
}

ZombieHorde::~ZombieHorde()
{
    delete[] horde;
    return;
}

Zombie *ZombieHorde::randomChump(int n)
{
    Zombie *horde;

    horde = new Zombie[n];
    rename_zombies(horde, n);
    advertHorde(horde, n);
    return (horde);
}

Zombie *ZombieHorde::rename_zombies(Zombie *horde, int n)
{
    std::string types[3] = {"lent", "rapide", "normale"};
    int num;

    srand(time(NULL));
    num = rand() % 999999;
    for(int i = 0; i < n; i++)
    {
        std::string Zname = std::to_string(num);
        horde[i].rename(Zname);
        horde[i].retype(types[num % 3]);
        srand(num);
        num = rand() % 999999;
    }
    return(horde);
}

void    ZombieHorde::advertHorde(Zombie *horde, int n) const
{
        for(int i = 0; i < n; i++)
    {
        horde[i].advert();
    }
}
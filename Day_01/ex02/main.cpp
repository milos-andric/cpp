/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:55:18 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 15:38:24 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    Zombie ted = Zombie("ted", "rapide");
    ted.advert();
    ZombieEvent test = ZombieEvent();
    Zombie *frate = test.randomChump();
    frate->advert();
    delete frate;

    return(0);
}
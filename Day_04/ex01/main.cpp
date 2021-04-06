/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:45:56 by mandric           #+#    #+#             */
/*   Updated: 2021/03/25 15:26:19 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

int     main(void)
{
    Character* me = new Character("me");
    
    std::cout << *me;
    
    //Enemy* b = new RadScorpion();
    
    AWeapon* pr = new PlasmaRifle();
    //AWeapon* pf = new PowerFist();
    
    me->equip(pr);
    std::cout << *me;
    // me->equip(pf);
    
    // me->attack(b);
    // std::cout << *me;
    // me->equip(pr);
    // std::cout << *me;
    // me->attack(b);
    // std::cout << *me;
    // me->attack(b);
    // std::cout << *me;
    return 0;
}
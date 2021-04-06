/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:26:09 by mandric           #+#    #+#             */
/*   Updated: 2021/03/18 11:17:11 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:

    std::string name;
    Weapon*     weapon;

public:
    HumanB(std::string name);
    ~HumanB();
    void    attack(void);
    void    setWeapon(Weapon& weapon);
};

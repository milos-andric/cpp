/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:07:44 by mandric           #+#    #+#             */
/*   Updated: 2021/03/17 12:24:39 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:

    std::string name;
    Weapon&     weapon;

public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void    attack(void);
};

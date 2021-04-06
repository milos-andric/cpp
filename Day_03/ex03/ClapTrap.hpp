/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:32:08 by mandric           #+#    #+#             */
/*   Updated: 2021/03/24 16:36:47 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
public:

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & src);
    virtual ~ClapTrap();

    ClapTrap &          operator=(ClapTrap const & src);

    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
    void                takeDmg(unsigned int amount);
    void                beRepaired(unsigned int amount);
    std::string         getName(void);

protected :

    std::string         _name;
    int                 _hitPoint;
    int                 _maxHitPoint;
    int                 _energyPoint;
    int                 _maxEnergyPoint;
    int                 _level;
    int                 _meleeAttackDmg;
    int                 _rangedAttackDmg;
    int                 _armorDmgReduction;

    int                 randomizer(int modulo);
};

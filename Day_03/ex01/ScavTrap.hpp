/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:28:52 by mandric           #+#    #+#             */
/*   Updated: 2021/03/24 16:46:46 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScavTrap
{
public:

    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();
    
    ScavTrap & operator=(const ScavTrap & src);


    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
    void                takeDmg(unsigned int amount);
    void                beRepaired(unsigned int amount);
    void                challengeNewcomer(std::string const & target);

private :

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
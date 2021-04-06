/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:29:56 by mandric           #+#    #+#             */
/*   Updated: 2021/03/24 13:36:15 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class   FragTrap {

public:

    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap();
    
    FragTrap &          operator=(FragTrap const & src);

    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
    void                takeDmg(unsigned int amount);
    void                beRepaired(unsigned int amount);
    void                vaulthunter_dot_exe(std::string const & target);

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
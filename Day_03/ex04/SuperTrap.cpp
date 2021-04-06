/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:55:04 by mandric           #+#    #+#             */
/*   Updated: 2021/04/06 11:27:02 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : NinjaTrap()
{
    std::cout << "Supertrap basic constructor" << std::endl;
    this->_hitPoint = FragTrap::_hitPoint;
    _maxHitPoint = FragTrap::_maxHitPoint;
    _energyPoint = NinjaTrap::_energyPoint;
    _maxEnergyPoint = NinjaTrap::_maxEnergyPoint;
    _meleeAttackDmg = NinjaTrap::_meleeAttackDmg;
    _rangedAttackDmg = FragTrap::_rangedAttackDmg;
    _armorDmgReduction = FragTrap::_armorDmgReduction;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name)
{
    std::cout << "Supertrap name constructor" << std::endl;
    _hitPoint = FragTrap::_hitPoint;
    _maxHitPoint = FragTrap::_maxHitPoint;
    _energyPoint = NinjaTrap::_energyPoint;
    _maxEnergyPoint = NinjaTrap::_maxEnergyPoint;
    _meleeAttackDmg = NinjaTrap::_meleeAttackDmg;
    _rangedAttackDmg = FragTrap::_rangedAttackDmg;
    _armorDmgReduction = FragTrap::_armorDmgReduction;
}

SuperTrap::~SuperTrap()
{
    std::cout << "Supertrap destructor" << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & src)
{
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_maxHitPoint = src._maxHitPoint;
    this->_energyPoint = src._energyPoint;
    this->_maxEnergyPoint = src._maxEnergyPoint;
    this->_level = src._level;
    this->_meleeAttackDmg = src._meleeAttackDmg;
    this->_rangedAttackDmg = src._rangedAttackDmg;
    this->_armorDmgReduction = src._armorDmgReduction;
    return (*this);
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
    std::cout << "Supertrap copy constructor" << std::endl;
    
    _hitPoint = src._hitPoint;
    _maxHitPoint = src._maxHitPoint;
    _energyPoint = src._energyPoint;
    _maxEnergyPoint = src._maxEnergyPoint;
    _meleeAttackDmg = src._meleeAttackDmg;
    _rangedAttackDmg = src._rangedAttackDmg;
    _armorDmgReduction = src._armorDmgReduction;
}
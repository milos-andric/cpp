/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:55:04 by mandric           #+#    #+#             */
/*   Updated: 2021/04/07 13:48:01 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : NinjaTrap(5), FragTrap(5)
{
    std::cout << "Supertrap basic constructor"  << std::endl;
}

SuperTrap::SuperTrap(std::string name) : NinjaTrap(5), FragTrap(5)
{
    this->_name = name;
    std::cout << "Supertrap name constructor"<< this << std::endl;
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

void     SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
    return;
}

void     SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
    return;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
    std::cout << "Supertrap copy constructor" << std::endl;
    
    *this = src;
    return;
}
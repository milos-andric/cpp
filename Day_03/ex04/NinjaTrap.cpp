/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:27:16 by mandric           #+#    #+#             */
/*   Updated: 2021/04/06 11:24:56 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Ninjatrap name constructor" << std::endl;
    std::string tabPhrase[5] = {"*appears out of nowhere* good evening.", "I've been meditating for hours bruh.", "What is my purpose ?", "I like killing people.", "Can i kill someone real quick ?"};
    

    this->_hitPoint = 60;
    this->_maxHitPoint = 60;
    this->_energyPoint = 120;
    this->_maxEnergyPoint = 120;
    this->_meleeAttackDmg = 60;
    this->_rangedAttackDmg = 5;
    this->_armorDmgReduction = 0;

    std::cout << tabPhrase[this->randomizer(5)] << std::endl;
    return;
}

NinjaTrap::NinjaTrap() : ClapTrap()
{
    std::cout << "Ninjatrap basic constructor" << std::endl;
    std::string tabPhrase[5] = {"*appears out of nowhere* good evening.", "I've been meditating for hours bruh.", "What is my purpose ?", "I like killing people.", "Can i kill someone real quick ?"};
    
    this->_hitPoint = 60;
    this->_maxHitPoint = 60;
    this->_energyPoint = 120;
    this->_maxEnergyPoint = 120;
    this->_meleeAttackDmg = 20;
    this->_rangedAttackDmg = 5;
    this->_armorDmgReduction = 0;

    std::cout << tabPhrase[this->randomizer(5)] << std::endl;
    return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
    std::cout << "Ninjatrap copy constructor" << std::endl;
    *this = src;
    return;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Ninjatrap destructor" << std::endl;
    return;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src)
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

void    NinjaTrap::ninjaShoebox(ClapTrap& target)
{
    std::cout << "ClapTraps " << target.getName() << " gets recked by ninja " << this->_name << "." << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap& target)
{
    std::cout << "ScavTrap " << target.getName() << " puts up a good fight but isn't up to " << this->_name << " thus getting recked by him." << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap& target)
{
    std::cout << "FragTraps " << target.getName() << " gets recked by ninja " << this->_name << "." << std::endl;
}

void    NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
    std::cout << "Ninja " << target.getName() << " puts up a good fight but isn't up to " << this->_name << " thus getting recked by him." << std::endl;
    return;
}
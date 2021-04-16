/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:32:05 by mandric           #+#    #+#             */
/*   Updated: 2021/04/07 13:42:53 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "Claptrap name constructor" << std::endl;

    return;
}

ClapTrap::ClapTrap()
{
    std::cout << "Claptrap basic constructor" << std::endl;
    int num = this->randomizer(99999);
    std::string randName = std::to_string(num);
    randName = "Robot_" + randName;
    this->_name = randName;
    
    std::string tabPhrase[5] = {"Hi ! Sooooo... how are things?", "", "Hey, best friend!", "Let me teach you the ways of magic!", "Directive one: Protect humanity!"};
    
    this->_hitPoint = 100;
    this->_maxHitPoint = 100;
    this->_energyPoint = 100;
    this->_maxEnergyPoint = 100;
    this->_level = 1;
    this->_meleeAttackDmg = 30;
    this->_rangedAttackDmg = 20;
    this->_armorDmgReduction = 5;

    std::cout << tabPhrase[this->randomizer(5)] << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Claptrap copy constructor" << std::endl;
    *this = src;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
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

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap destructor" << std::endl;
    return;
}

void    ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDmg << " of damage!" << std::endl;
    return;
}

void    ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDmg << " of damage!" << std::endl;
    return;
}

void    ClapTrap::takeDmg(unsigned int amount)
{
    int damage;
    
    damage = amount - this->_armorDmgReduction;
    damage < 0 ? damage =  0 : 0 ;
    if ((this->_hitPoint = damage - this->_hitPoint) < 0)
        this->_hitPoint = 0;
    std::cout << this->_name << " receives " << damage << " points of damage! Argg !" << std::endl;
    return;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if ((int)(amount + this->_hitPoint) > this->_maxHitPoint)
        amount = this->_hitPoint - this->_maxHitPoint;
    this->_hitPoint += amount;
    std::cout << this->_name << " is repaired for an amount of " << amount << " hit points! Niceee !" << std::endl;
    return;
}

std::string     ClapTrap::getName(void)
{
    return(this->_name);
}

int     ClapTrap::randomizer(int modulo)
{
    static unsigned int i = 0;

    i += 3;
    srand(time(NULL) + i);
    return(rand() % modulo);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:29:55 by mandric           #+#    #+#             */
/*   Updated: 2021/03/24 13:40:23 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)
{
    std::string tabPhrase[5] = {"Hi ! Sooooo... how are things?", "Bootup sequence Completed! Who's up for Beer Pong???", "Hey, best friend!", "Let me teach you the ways of magic!", "Directive one: Protect humanity!"};
    
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

FragTrap::FragTrap()
{
    int num = this->randomizer(99999);
    std::string randName = std::to_string(num);
    randName = "Robot_" + randName;
    this->_name = randName;
    
    std::string tabPhrase[5] = {"Hi ! Sooooo... how are things?", "Bootup sequence Completed! Who's up for Beer Pong???", "Hey, best friend!", "Let me teach you the ways of magic!", "Directive one: Protect humanity!"};
    
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

FragTrap::FragTrap(FragTrap const & src)
{
    *this = src;
    return;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
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

FragTrap::~FragTrap()
{
    return;
}

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDmg << " of damage!" << std::endl;
    return;
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDmg << " of damage!" << std::endl;
    return;
}

void    FragTrap::takeDmg(unsigned int amount)
{
    int damage;
    
    damage = amount - this->_armorDmgReduction;
    damage < 0 ? damage =  0 : 0 ;
    if ((this->_hitPoint = damage - this->_hitPoint) < 0)
        this->_hitPoint = 0;
    std::cout << "FR4G-TP " << this->_name << " receives " << damage << " points of damage! Argg !" << std::endl;
    return;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    if ((int)(amount + this->_hitPoint) > this->_maxHitPoint)
        amount = this->_hitPoint - this->_maxHitPoint;
    this->_hitPoint += amount;
    std::cout << "FR4G-TP " << this->_name << " is repaired for an amount of " << amount << " hit points! Niceee !" << std::endl;
    return;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (this->_energyPoint >= 25)
    {
        std::string attacks[5] = {" by pissing hot oil at it!", " by farting a toxic cloud at it!", " by throwing a rotten apple at him!", " by stabbing him with a rusted fork!", " by telling him he's a bad boy!"};

        this->_energyPoint -= 25;
        std::cout << "FR4G-TP " << this->_name << " attacks " << target << attacks[randomizer(5)] << " Causing " << this->_meleeAttackDmg << " points of damage !" << std::endl;
    }
    else
    {
        std::string misses[5] = {" slipping on a banana peel coming from nowhere!", " getting the finger form the opponent!", " throwing up his breakfast all over the floor!", " getting fucked in the ass by a dog??", " taking a little nap!?"};

        std::cout << "FR4G-TP " << this->_name << " doesn't have enought energy point! Thus hummiliating himself by" << misses[randomizer(5)] << std::endl;
    }
}

int     FragTrap::randomizer(int modulo)
{
    static unsigned int i = 0;

    i += 3;
    srand(time(NULL) + i);
    return(rand() % modulo);
}
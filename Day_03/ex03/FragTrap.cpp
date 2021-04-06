/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:29:55 by mandric           #+#    #+#             */
/*   Updated: 2021/04/06 11:19:19 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Fragtrap name constructor" << std::endl;
    std::string tabPhrase[5] = {"Hi ! Sooooo... how are things?", "Bootup sequence Completed! Who's up for Beer Pong???", "Hey, best friend!", "Let me teach you the ways of magic!", "Directive one: Protect humanity!"};
    std::cout << tabPhrase[this->randomizer(5)] << std::endl;
    return;
}

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Fragtrap basic constructor" << std::endl;
    std::string tabPhrase[5] = {"Hi ! Sooooo... how are things?", "Bootup sequence Completed! Who's up for Beer Pong???", "Hey, best friend!", "Let me teach you the ways of magic!", "Directive one: Protect humanity!"};
    std::cout << tabPhrase[this->randomizer(5)] << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
    std::cout << "Fragtrap copy constructor" << std::endl;
    *this = src;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor" << std::endl;
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

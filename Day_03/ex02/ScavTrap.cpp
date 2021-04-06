/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:28:50 by mandric           #+#    #+#             */
/*   Updated: 2021/04/06 11:14:13 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap name constructor" << std::endl;
    std::string tabPhrase[5] = {"Greetings Traveller!", "*beeeeeeeeeeeeep* Hi!", "Good as new, I think. Am I leaking?", "On my Waaaayyyyy !", "Hello fellow traveller!"};
    
    this->_energyPoint = 50;
    this->_maxEnergyPoint = 50;
    this->_meleeAttackDmg = 20;
    this->_rangedAttackDmg = 15;
    this->_armorDmgReduction = 3;

    std::cout << tabPhrase[this->randomizer(5)] << std::endl;
    return;
}

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap basic constructor" << std::endl;
    std::string tabPhrase[5] = {"Greetings Traveller!", "*beeeeeeeeeeeeep* Hi!", "Good as new, I think. Am I leaking?", "On my Waaaayyyyy !", "Hello fellow traveller!"};
    
    this->_energyPoint = 50;
    this->_maxEnergyPoint = 50;
    this->_meleeAttackDmg = 20;
    this->_rangedAttackDmg = 15;
    this->_armorDmgReduction = 3;

    std::cout << tabPhrase[this->randomizer(5)] << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "ScavTrap copy constructor" << std::endl;
    *this = src;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor" << std::endl;
    return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
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

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    if (this->_energyPoint >= 25)
    {
        std::string challenge[5] = {" to a game of connect 4...", " to a trial by combat!", " to \"who can scream the loudest!\"", " to a tic-tac-toe showdown", " to a \"mining bitcoin speedrun!\""};

        this->_energyPoint -= 25;
        std::cout << "SC4V-TP " << this->_name << " challenges " << target << challenge[randomizer(5)] << std::endl;
    }
    else
    {
        std::string misses[5] = {" having an existencial crisis!", " feeling he doesn't belong in this graveyard!", " calling his mother to confort him!", " twerking??", " letting you become his master!?"};

        std::cout << "SC4V-TP " << this->_name << " doesn't have enought energy point! Thus hummiliating himself by" << misses[randomizer(5)] << std::endl;
    }
}

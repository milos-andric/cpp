/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:28:50 by mandric           #+#    #+#             */
/*   Updated: 2021/04/08 09:22:53 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name)
{
    std::cout << "ScavTrap name constructor" << std::endl;
    std::string tabPhrase[5] = {"Greetings Traveller!", "*beeeeeeeeeeeeep* Hi!", "Good as new, I think. Am I leaking?", "On my Waaaayyyyy !", "Hello fellow traveller!"};
    
    this->_hitPoint = 100;
    this->_maxHitPoint = 100;
    this->_energyPoint = 50;
    this->_maxEnergyPoint = 50;
    this->_level = 1;
    this->_meleeAttackDmg = 20;
    this->_rangedAttackDmg = 15;
    this->_armorDmgReduction = 3;

    std::cout << tabPhrase[this->randomizer(5)] << std::endl;
    return;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap basic constructor" << std::endl;
    int num = this->randomizer(99999);
    std::string randName = std::to_string(num);
    randName = "Robot_" + randName;
    this->_name = randName;
    
    std::string tabPhrase[5] = {"Greetings Traveller!", "*beeeeeeeeeeeeep* Hi!", "Good as new, I think. Am I leaking?", "On my Waaaayyyyy !", "Hello fellow traveller!"};
    
    this->_hitPoint = 100;
    this->_maxHitPoint = 100;
    this->_energyPoint = 50;
    this->_maxEnergyPoint = 50;
    this->_level = 1;
    this->_meleeAttackDmg = 20;
    this->_rangedAttackDmg = 15;
    this->_armorDmgReduction = 3;

    std::cout << tabPhrase[this->randomizer(5)] << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "scavtrap copy constructor" << std::endl;
    *this = src;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "scavtrap destructor" << std::endl;
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

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << this->_name << " attacks " << target << " from afar, inflicting " << this->_rangedAttackDmg << " of damage!" << std::endl;
    return;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << this->_name << " attacks " << target << " from afar, inflicting " << this->_meleeAttackDmg << " of damage!" << std::endl;
    return;
}

void    ScavTrap::takeDmg(unsigned int amount)
{
    int damage;
    
    damage = amount - this->_armorDmgReduction;
    if (damage < 0)
        damage = 0;
    if ((this->_hitPoint = this->_hitPoint - damage) < 0)
        this->_hitPoint = 0;
    std::cout << "SC4V-TP " << this->_name << " gets dealt " << damage << " points of damage! Leaving him at " << this->_hitPoint << " hit points!" << std::endl;
    return;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if ((int)(amount + this->_hitPoint) > this->_maxHitPoint)
        amount = this->_hitPoint - this->_maxHitPoint;
    this->_hitPoint += amount;
    std::cout << "SC4V-TP " << this->_name << " gets his bolts tightened, healing him for an amount of " << amount << " hit points! feelsgoodman!" << std::endl;
    return;
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

int     ScavTrap::randomizer(int modulo)
{
    static unsigned int i = 0;

    i += 3;
    srand(time(NULL) + i);
    return(rand() % modulo);
}
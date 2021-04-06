/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:29:58 by mandric           #+#    #+#             */
/*   Updated: 2021/03/22 10:18:28 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap tony = FragTrap("Tony");

    tony.beRepaired(50);
    tony.vaulthunter_dot_exe("Frank");
    tony.takeDmg(50);
    tony.meleeAttack("Frank");
    tony.rangedAttack("Frank");
    tony.takeDmg(25);
    tony.vaulthunter_dot_exe("Frank");
    tony.vaulthunter_dot_exe("Frank");
    tony.vaulthunter_dot_exe("Frank");
    tony.vaulthunter_dot_exe("Frank");
    tony.vaulthunter_dot_exe("Frank");
    tony.beRepaired(20);

    FragTrap man = FragTrap();
    man.takeDmg(30);

    ScavTrap mate = ScavTrap("Tristan");

    mate.beRepaired(50);
    mate.challengeNewcomer("Guy");
    mate.takeDmg(50);
    mate.meleeAttack("Guy");
    mate.rangedAttack("Guy");
    mate.takeDmg(25);
    mate.challengeNewcomer("Guy");
    mate.challengeNewcomer("Guy");
    mate.challengeNewcomer("Guy");
    mate.challengeNewcomer("Guy");
    mate.challengeNewcomer("Guy");
    mate.beRepaired(20);

    ScavTrap thierry = ScavTrap();
    thierry.takeDmg(30);
    return(0);

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:29:58 by mandric           #+#    #+#             */
/*   Updated: 2021/03/19 13:27:00 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
    man.takeDmg(2);
    return(0);
}
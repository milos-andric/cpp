/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:55:00 by mandric           #+#    #+#             */
/*   Updated: 2021/04/07 12:39:48 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public NinjaTrap, public FragTrap
{
public:
    SuperTrap();
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const & src);
    virtual ~SuperTrap();

    SuperTrap &         operator=(SuperTrap const & src);


    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
};
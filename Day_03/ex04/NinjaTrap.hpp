/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:27:18 by mandric           #+#    #+#             */
/*   Updated: 2021/03/24 16:34:11 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const & src);
    virtual ~NinjaTrap();

    NinjaTrap &         operator=(NinjaTrap const & src);

    void    ninjaShoebox(ClapTrap& target);
    void    ninjaShoebox(ScavTrap& target);
    void    ninjaShoebox(FragTrap& target);
    void    ninjaShoebox(NinjaTrap& target);
};
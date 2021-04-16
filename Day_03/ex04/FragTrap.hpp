/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:29:56 by mandric           #+#    #+#             */
/*   Updated: 2021/04/07 13:00:20 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class   FragTrap : public virtual ClapTrap
{
public:

    FragTrap();
    FragTrap(std::string name);
    FragTrap(int diamond);
    FragTrap(FragTrap const & src);
    virtual ~FragTrap();

    FragTrap &          operator=(FragTrap const & src);

    void        rangedAttack(std::string const & target);
    void        vaulthunter_dot_exe(std::string const & target);
};
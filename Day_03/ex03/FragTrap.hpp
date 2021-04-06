/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:29:56 by mandric           #+#    #+#             */
/*   Updated: 2021/03/24 16:37:18 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
public:

    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap();
    
    FragTrap &          operator=(FragTrap const & src);

    void                vaulthunter_dot_exe(std::string const & target);    
};
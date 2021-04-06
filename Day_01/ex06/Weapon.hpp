/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:32:29 by mandric           #+#    #+#             */
/*   Updated: 2021/03/17 11:20:43 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
private :

    std::string type;
    
public :

    Weapon(std::string type);
    ~Weapon();
    const std::string& getType(void) const;
    void        setType(std::string type);
};
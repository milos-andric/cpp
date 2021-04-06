/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:21:03 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 13:42:56 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
    nb_legs = 4;
    is_dirty = false;
    return;
}

Pony::~Pony(void)
{
    return;
}

void    Pony::do_a_barrel_roll(std::string str)
{
    std::cout << "Le poney fais un barrel_roll" << str << std::endl;
    this->is_dirty = true;
    return;
}
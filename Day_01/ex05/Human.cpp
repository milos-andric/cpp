/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:53:16 by mandric           #+#    #+#             */
/*   Updated: 2021/03/17 10:20:37 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <sstream>

Human::Human(void)
{
	return;	
}

Human::~Human(void)
{
	return;
}

std::string Human::identify(void)
{
    std::stringstream add;
	add << this->smallBrain.identify();
	return(add.str());
}

const Brain     &Human::getBrain(void) const
{
    return(smallBrain);
}
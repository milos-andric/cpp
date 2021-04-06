/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:52:29 by mandric           #+#    #+#             */
/*   Updated: 2021/03/18 11:00:32 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
	memory = 'q';
	return;	
}

Brain::~Brain(void)
{
	return;
}

std::string Brain::identify(void) const
{
	std::stringstream adresse;
	adresse << this;
	return(adresse.str());
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:53:38 by mandric           #+#    #+#             */
/*   Updated: 2021/03/17 10:20:57 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"

class Human 
{
private :

	Brain const smallBrain;

public :

	Human();
	~Human();
	std::string identify(void);
    const Brain &getBrain(void) const;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milosandric <milosandric@student.42lyon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:09:48 by milosandric       #+#    #+#             */
/*   Updated: 2021/03/16 20:20:35 by milosandric      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class Human 
{
	private :
	
	Brain bigBrain;
	
	public :
	
	Human();
	~Human();
	std::string identifier(void);
	Brain		getBrain();
};
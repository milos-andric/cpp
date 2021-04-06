/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:24:07 by mandric           #+#    #+#             */
/*   Updated: 2021/03/24 13:00:46 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <iostream>

class Fixed
{
public :

	Fixed();
	Fixed(int n);
	Fixed(float n);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed & operator=(const Fixed & src);

	int    getRawBits(void) const;
	void    setRawBits(int const n);

	int     toInt(void) const;
	float   toFloat(void) const;

private :

	int                 _n;
	static int const    _point = 8;
};

std::ostream &		operator<<(std::ostream & out, const Fixed & src);
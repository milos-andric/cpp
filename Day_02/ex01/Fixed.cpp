/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:24:05 by mandric           #+#    #+#             */
/*   Updated: 2021/03/24 13:00:44 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//	Constructors & Destructors

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_n = 0;
	return;
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = (int)((1 << this->_point) * n);
	return;
}

Fixed::Fixed(float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = (int)roundf((1 << this->_point) * n);
	return;
}

Fixed::Fixed(Fixed const& src)
{
	
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

//	Setters & Getters

int			Fixed::getRawBits(void) const
{
	return(this->_n);
}

void		Fixed::setRawBits(int const n)
{
	this->_n = n;
	return;
}

//	Conversion member function

int			Fixed::toInt(void) const
{
	return((this->_n / (1 << this->_point)));
}

float		Fixed::toFloat(void) const
{
	return((this->_n / (float)(1 << this->_point)));
}

// Operators overload

Fixed &		Fixed::operator=(const Fixed & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_n = src.getRawBits();
	return (*this);
}

std::ostream &		operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

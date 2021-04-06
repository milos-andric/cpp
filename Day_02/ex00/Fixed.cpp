/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:24:05 by mandric           #+#    #+#             */
/*   Updated: 2021/03/24 12:20:15 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_n = 0;
    return;
}

Fixed::Fixed(int n) : _n(n)
{
    std::cout << "Int constructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_n);
}

void    Fixed::setRawBits(int const n)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_n = n;
    return;
}

Fixed & Fixed::operator=(const Fixed & src)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_n = src.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}


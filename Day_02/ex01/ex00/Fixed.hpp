/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:24:07 by mandric           #+#    #+#             */
/*   Updated: 2021/03/24 12:18:58 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
public :

    Fixed();
    Fixed(int n);
    Fixed(Fixed const & src);
    virtual ~Fixed();

    Fixed & operator=(const Fixed & src);

    int     getRawBits(void) const;
    void    setRawBits(int const n);

private :

    int                 _n;
    static int const    _point = 8;
};

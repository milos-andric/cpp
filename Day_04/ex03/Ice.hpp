/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbajrami <tbajrami@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:16:16 by tbajrami          #+#    #+#             */
/*   Updated: 2021/02/09 11:47:35 by tbajrami         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &ref);
    virtual ~Ice();
    Ice &operator=(const Ice &rhs);

    virtual AMateria *clone() const;
    void             use(ICharacter& target);
};

#endif
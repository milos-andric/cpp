/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbajrami <tbajrami@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:34:01 by tbajrami          #+#    #+#             */
/*   Updated: 2021/02/09 11:57:11 by tbajrami         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &ref);
    virtual ~Cure();
    Cure &operator=(const Cure &rhs);

    virtual AMateria *clone() const;
    virtual void     use(ICharacter& target);
};

#endif
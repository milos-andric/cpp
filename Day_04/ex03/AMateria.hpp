/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbajrami <tbajrami@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:04:22 by tbajrami          #+#    #+#             */
/*   Updated: 2021/02/09 11:55:35 by tbajrami         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:

    AMateria();
    unsigned int _xp;
    std::string  _type;

public:

    AMateria(std::string const & type);
    AMateria(AMateria const &ref);
    virtual             ~AMateria();
    AMateria            &operator=(AMateria const &rhs);
    std::string const   &getType() const;
    unsigned int        getXP() const;
    virtual AMateria*   clone() const = 0;
    void                setXP(unsigned int xp);
    void                setType(std::string type);
    virtual void        use(ICharacter& target);
};

#endif
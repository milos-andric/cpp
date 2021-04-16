/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbajrami <tbajrami@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:54:21 by tbajrami          #+#    #+#             */
/*   Updated: 2021/02/09 11:47:41 by tbajrami         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    
    AMateria *_inv[4];

public:

    MateriaSource();
    MateriaSource(const MateriaSource &ref);
    virtual ~MateriaSource();
    MateriaSource &operator=(const MateriaSource &rhs);

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
    AMateria    *getEquip(int index) const;
};

#endif
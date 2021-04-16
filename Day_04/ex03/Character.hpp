/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbajrami <tbajrami@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:42:23 by tbajrami          #+#    #+#             */
/*   Updated: 2021/02/09 11:47:29 by tbajrami         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:

    std::string _name;
    AMateria    *_inv[4];
    Character();

public:

    Character(std::string name);
    Character(const Character &ref);
    Character &operator=(const Character &rhs);
    virtual ~Character();

    AMateria *getEquip(int index) const;
    void     setEquip(int index, AMateria *m);
    
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 08:25:55 by mandric           #+#    #+#             */
/*   Updated: 2021/04/12 12:50:56 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << "Part 1" << '\n';

    IMateriaSource *src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    
    ICharacter *me = new Character("me");
    Character *bob = new Character("bob");
    Character *bob2 = new Character("bob2");
    AMateria *cure;
    AMateria *cure2;
    AMateria *cure3;
    AMateria *cure4;
    AMateria *ice;
    ice = src->createMateria("ice");
    me->equip(ice);
    cure = src->createMateria("cure");
    me->equip(cure);
    cure2 = src->createMateria("cure");
    me->equip(cure2);
    cure3 = src->createMateria("cure");
    me->equip(cure3);
    cure4 = src->createMateria("cure");
    me->equip(cure4);
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);
    me->use(5, *bob);
    std::cout << "xp of cure materia : " << cure->getXP() << std::endl;
    std::cout << "xp of ice materia : " << ice->getXP() << std::endl;
    std::cout << "Part 2" << '\n';
    AMateria *ice2;
    ice2 = src->createMateria("ice");
    bob->equip(ice2);
    bob->unequip(0);
    bob->equip(ice2);
    AMateria *tmp2;
    tmp2 = src->createMateria("bad");
    bob->equip(tmp2);
    *bob2 = *bob;
    bob->use(0, *bob);
    bob2->use(0, *bob);
    std::cout << "xp of ice2 materia : " << ice2->getXP() << std::endl;
    Character *bob3 = new Character(*bob2);
    MateriaSource *src2 = new MateriaSource();
    MateriaSource *src3 = new MateriaSource();
    src2->learnMateria(new Ice());
    *src3 = *src2;
    delete bob;
    delete bob2;
    delete bob3;
    delete me;
    delete src;
    delete src2;
    delete src3;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:34:31 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 13:02:11 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"


Phonebook::Phonebook(void)
{
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

void Phonebook::add_contact(void)
{
    if (nb_contact <= 7)
    {
        Contact retour;
        retour.prompt_cont();
        list[nb_contact] = retour;
        std::cout << "CONTACT NUMBER " << nb_contact + 1  << " ADDED\n";
        nb_contact++;
    }
    else{
        std::cout << "TROP DE POTE" << std::endl;
    }
}

bool Phonebook::str_num(std::string str) const
{
    for(int i = 0; str[i]; i++)
        if (!(isdigit(str[i])))
            return(false);
    return(true);
}

void Phonebook::aff_contact(void)
{
    std::string line;
    int num;

    if (nb_contact > 0)
    {
        for (int i = 0; i < nb_contact; i++)
        {
            list[i].aff_inf(i);
        }
    }
    else{
        std::cout << "PAS TROP DE POTE" << std::endl;
        return;
    }
    std::cout << "QUEL INDEX SOUHAITE TU AFFICHER ?" << std::endl;
    std::getline (std::cin, line);
    if ((str_num(line)))
    {
        num = std::stoi(line);
        if ((num >= 0) && (num < nb_contact))
            list[num].show_cont();
        else 
            std::cout << "OUPS NON ?" << std::endl;
    }
    else
        std::cout << "UN NOMBRE STP" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:56:39 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 11:32:53 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

char *get_in(char *prompt)
{
	char *line = NULL;
	
	std::cout << prompt << std::endl;
	std::cin >> line ;
	return(line);
}

int main() {
	int 		flag = 0;
	std::string line;

	Phonebook annuaire;

	std::cout << "Please use the following command : ADD, SEARCH, EXIT\n";
	while (!flag)
	{
		std::getline (std::cin, line);
		if (line == "ADD")
			annuaire.add_contact();
		else if (line == "SEARCH")
			annuaire.aff_contact();
		else if (line == "EXIT")
			flag = 1;
		else {
			std::cout << "???\n";
		}
		std::cin.clear();
	}
	return (0);
}
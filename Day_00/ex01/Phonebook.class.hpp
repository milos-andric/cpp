/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:40:57 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 12:26:03 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class Phonebook
{
	private : 

	int nb_contact;
	Contact list[8];
	bool str_num(std::string str) const;

	public :
	
	Phonebook(void);
	~Phonebook(void);
	void add_contact(void);
	void aff_contact(void);
};

#endif
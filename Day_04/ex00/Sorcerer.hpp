/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:48:39 by mandric           #+#    #+#             */
/*   Updated: 2021/03/25 13:21:33 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include "Peon.hpp"

# include <iostream>
# include <string>

class Sorcerer
{

	public:

		Sorcerer(std::string name, std::string title);
		Sorcerer( Sorcerer const & src );
		~Sorcerer();

		Sorcerer &		operator=( Sorcerer const & rhs );
		std::string		getName() const;
		std::string		getTitle() const;

		void 			polymorph(Victim const & i) const;
		void 			polymorph(Peon const & i) const;
	private:

		Sorcerer();

		std::string _name;
		std::string	_title;
};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif /* ******************************************************** SORCERER_H */
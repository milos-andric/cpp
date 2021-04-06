/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:48:39 by mandric           #+#    #+#             */
/*   Updated: 2021/03/25 10:59:42 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim(std::string name);
		Victim( Victim const & src );
		~Victim();

		Victim &		operator=( Victim const & rhs );
		std::string		getName() const;

        void            getPolymorphed() const;

	protected:

        Victim();
		std::string _name;
};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif /* ******************************************************** SORCERER_H */
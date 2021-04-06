/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:21:11 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 13:42:55 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {

    public :

    Pony();
    ~Pony();
    void do_a_barrel_roll(std::string str);

    private :
    
    int nb_legs;
    bool is_dirty;
    std::string couleur;

};

#endif
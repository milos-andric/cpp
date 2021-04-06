/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:31:42 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 13:45:51 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int ponyOnTheStack(void)
{
    Pony petit_Tonerre;

    petit_Tonerre.do_a_barrel_roll(" sur la Stack");
    return(0);
}

int ponyOnTheHeap(void)
{
    Pony* uma = new Pony();

    if (uma == NULL)
        return(-1);

    uma->do_a_barrel_roll(" sur la Heap");

    delete uma;
    return(0);
}

int main(void)
{
    int ret;

    ret = 0;
    if (ponyOnTheStack())
        return(-1);
    if (ponyOnTheHeap())
        return(-1);
    return(0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:05:21 by mandric           #+#    #+#             */
/*   Updated: 2021/03/16 09:57:22 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *string_upper(char *str)
{
    int i = 0;

    while (str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
    return(str);
}

int main(int ac, char **av) {
    int i = 1;
    std::string str;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (av[i])
    {
        str = string_upper(av[i]);
        std::cout << str;
        i++;
    }
    std::cout << std::endl;
    return 0;
}
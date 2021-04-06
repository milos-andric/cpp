/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandric <mandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:48:23 by mandric           #+#    #+#             */
/*   Updated: 2021/03/18 11:43:08 by mandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int error(void)
{
    std::cout << "please use : ./a.out <FILE_NAME> <StrToRemove> <StrToReplace>" << std::endl;
    return(-1);
}

int main(int ac, char **av)
{
    std::ofstream   myFile;
    std::ifstream   theFile;
    std::string     line;

    if (ac != 4)
        return (error());
    if (!av[1][0] || !av[2][0] || !av[3][0])
        return (error());
    
    std::string str1 = av[2];
    std::string str2 = av[3];

    theFile.open(av[1], std::ifstream::in);

    if (!(theFile.is_open()))
        return (error());
    
    myFile.open((std::string)av[1] + (std::string)".test");
    
    theFile.seekg(0, theFile.end);
    int length = theFile.tellg();
    theFile.seekg (0, theFile.beg);

    char * buffer = new char [length];
    theFile.read(buffer, length);

    line = buffer;
    
    delete[] buffer;
    size_t pos = line.find(str1);
    while( pos != std::string::npos)
    {
        line.replace(pos, str1.size(), str2);
        pos =line.find(str1, pos + str2.size());
    }
    
    myFile << line << std::endl;

    theFile.close();
    myFile.close();
    return (0);
}
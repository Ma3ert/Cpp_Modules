/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:48:03 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/04 15:57:29 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int ac, char **av)
{
	size_t			pos;
	std::string		line;
	std::string		s;
	std::string		s1;
	std::string		s2;
	if (ac != 4)
	{
		error:
			std::cout << "PARAM ERROR !!"  << std::endl;
			return (1);
	}
	if (!av[1])
		goto error;
	s = av[1];
	s1 = av[2];
	s2 = av[3];
	std::ifstream	infile(s);
	std::ofstream	outfile(s + ".replace");
	if (!infile.is_open() || !outfile.is_open())
		goto error;
	while (!infile.eof())
	{
		getline(infile, line);
		pos = line.find(s1, 0);
		if (pos != -1)
		{
			outfile << line.substr(0, pos);
			outfile << s2;
			outfile << line.substr(pos + s1.length(), -1);
			outfile << std::endl;
		}
		else
			outfile << line << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:02:15 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/08 15:03:09 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <climits>
#include <iostream>
#include <math.h>
#include <sstream>
#include <cstdlib>
#include <stdlib.h>
#include <string>

#define INT 1
#define CHAR 2
#define FLOAT 3
#define DOUBLE 4

void	char_hundle(std::string argu);
void	int_hundle(std::string arg);
void	printFormat(std::string arg, int dec);

#endif
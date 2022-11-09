/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:49:49 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/09 21:17:34 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

uintptr_t serialize(Data *ptr)
{
	uintptr_t	toReturn;

	toReturn = reinterpret_cast<uintptr_t>(ptr);
	return (toReturn);
}

Data* deserialize(uintptr_t raw)
{
	Data *toReturn;

	toReturn = reinterpret_cast<Data *>(raw);
	return (toReturn);
}

int main()
{
	Data *pointer = new Data();
	pointer->id = 222;
	uintptr_t intPointer = serialize(pointer);
	Data *secondPointer = deserialize(intPointer);
	
	if (secondPointer == pointer)
		std::cout << "everything is working as expected\n";
	else
		std::cout << "Oooops\n";
	std::cout << "from pointer 1: " << pointer->id << std::endl;
	std::cout << "from pointer 2: " << secondPointer->id << std::endl;
	delete pointer;
}

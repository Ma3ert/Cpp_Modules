/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:05:17 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/26 14:19:11 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAbstractAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const AbstractAnimal* meta = new AbstractAnimal();
	const AbstractAnimal* j = new Dog();
	const AbstractAnimal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n========== wrong AbstractAnimal ===========" << std::endl;

	const WrongAbstractAnimal* wrongMeta = new WrongAbstractAnimal();
	const WrongAbstractAnimal* wrongI = new WrongCat();
	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongI->getType() << " " << std::endl;
	wrongMeta->makeSound();
	wrongI->makeSound();

	std::cout << "\n=======desractor=======" << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << "\n=======wrong desractor=======" << std::endl;
	delete wrongMeta;
	delete wrongI; 
	
	return 0;
}
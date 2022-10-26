/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:05:17 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/26 16:02:15 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#define N 5


int main()
{
	Animal	*Animals[N];
	Brain	DefaulBrain;
	Dog		BaseDog; 
	Cat		BaseCat;
	std::cout << "\n==============fill the dog part=============" << std::endl;

	for (int i = 0; i < (N / 2); ++i)
	{
		std::cout << "-----------dg----------------" << std::endl;
		Animals[i] = new Dog(BaseDog);
	}

	std::cout << "\n==============fill the cat part=============" << std::endl;

	for (int i = (N / 2); i < N; ++i)
	{
		std::cout << "-------------c--------------" << std::endl;
		Animals[i] = new Cat(BaseCat);
	}
	
	std::cout << "\n==============destraction=============" << std::endl;

	for (int i = 0; i < N; ++i)
	{
		std::cout << "------------d---------------" << std::endl;
		delete Animals[i];
	}
	std::cout << "-------------d--------------" << std::endl;
	return 0;
}
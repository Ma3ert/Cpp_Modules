/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:23:17 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/11 15:52:17 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include <cstdlib>

Base *generate(void)
{
	int i;
	srand(time(NULL));
	i = rand()%3;
	switch(i)
	{
		case (0):
			return(new A);
		case (1):
			return (new B);
		case (2):
			return(new C);
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
	{
		std::cout << "A" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(p))
	{
		std::cout << "B" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(p))
	{
		std::cout << "C" << std::endl;
		return ;
	}
	std::cout << "Sorry but I can't Identify this type" << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<A *>(&p))
	{
		std::cout << "A" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(&p))
	{
		std::cout << "B" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(&p))
	{
		std::cout << "C" << std::endl;
		return ;
	}
	std::cout << "Sorry but I can't Identify this type" << std::endl;
}

int main()
{
	A a;
	B b;
	C c;
	D d;
	A *aPointer = new A;
	B *bPointer = new B;
	C *cPointer = new C;
	D *dPointer = new D;

	identify(a);
	identify(b);
	identify(c);
	identify(d);
	std::cout << "================pointers=================\n";
	identify(dPointer);
	identify(cPointer);
	identify(bPointer);
	identify(aPointer);
	std::cout << "===============generated==============\n";
	identify(generate());
	delete aPointer;
	delete cPointer;
	delete dPointer;
	delete bPointer;
}
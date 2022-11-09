/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:23:17 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/09 22:26:14 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include <cstdlib>

Base *generate(void)
{
	static int i;

	if (i == 4)
		i = 0;
	if (i == 0)
		return (i++, new A);
	if (i == 1)
		return (i++, new B);
	if (i == 2)
		return (i++, new C);
	return (i++, new D);
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
	if (dynamic_cast<D *>(p))
	{
		std::cout << "D" << std::endl;
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
	if (dynamic_cast<D *>(&p))
	{
		std::cout << "D" << std::endl;
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

	identify(&a);
	identify(&b);
	identify(&c);
	identify(&d);
	std::cout << "================pointers=================\n";
	identify(dPointer);
	identify(cPointer);
	identify(bPointer);
	identify(aPointer);
	delete aPointer;
	delete cPointer;
	delete dPointer;
	delete bPointer;
}
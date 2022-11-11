/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:25:23 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/11 15:49:49 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		~A();
};

class B : public Base
{
	public:
		~B();
};

class C : public Base
{
	public:
		~C();
};

class D : public Base
{
	public:
		~D();
};

#endif
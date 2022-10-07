/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:18 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/07 18:28:27 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					value;
		int					raw;
		const static int	Fraction = 8;
	public:
		Fixed	&operator = (Fixed &toAssign);
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		Fixed(Fixed &toCopy);
		Fixed(void);
		~Fixed();
};

#endif
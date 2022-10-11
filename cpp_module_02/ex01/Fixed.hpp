/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:18 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/11 11:46:57 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		const static int	Fraction = 8;
	public:
		Fixed			&operator = (Fixed const &toAssign);
		int 			getRawBits( void ) const;
		void 			setRawBits( int const raw );
		float			toFloat(void) const;
		int				toInt(void) const;
		Fixed(Fixed const &toCopy);
		Fixed(int num);
		Fixed(float num);
		Fixed(void);
		~Fixed();
};

#endif
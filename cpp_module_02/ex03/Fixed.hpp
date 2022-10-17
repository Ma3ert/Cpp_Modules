/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:18 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/17 17:58:18 by Ma3ert           ###   ########.fr       */
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
		Fixed			&operator = (Fixed &toAssign);
		Fixed			operator + (Fixed const &objet);
		Fixed			operator ++ (int inc);
		Fixed			operator -- (int inc);
		Fixed			operator ++ (void);
		Fixed			operator -- (void);
		Fixed			operator - (Fixed const &objet);
		Fixed			operator * (Fixed const &objet);
		Fixed			operator / (Fixed const &objet);
		bool			operator != (Fixed const &toCompare);
		bool			operator == (Fixed const &toCompare);
		bool			operator <= (Fixed const &toCompare);
		bool			operator >= (Fixed const &toCompare);
		bool			operator > (Fixed const &toCompare);
		bool			operator < (Fixed const &toCompare);
		int 			getRawBits( void ) const;
		void 			setRawBits( int const raw );
		float			toFloat(void) const;
		int				toInt(void) const;
		static	Fixed	&Max(Fixed &a, Fixed &b);
		static	Fixed	&Min(Fixed &a, Fixed &b);
		Fixed(Fixed const &toCopy);
		Fixed(int num);
		Fixed(float num);
		Fixed(void);
		~Fixed();
};

#endif
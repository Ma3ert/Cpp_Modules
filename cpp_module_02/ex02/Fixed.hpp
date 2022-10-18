/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:18 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/18 10:48:27 by Ma3ert           ###   ########.fr       */
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
		Fixed			operator + (Fixed const &objet) const;
		Fixed			operator ++ (int inc);
		Fixed			operator -- (int inc);
		Fixed			operator ++ (void);
		Fixed			operator -- (void);
		Fixed			operator - (Fixed const &objet) const;
		Fixed			operator * (Fixed const &objet) const;
		Fixed			operator / (Fixed const &objet) const;
		bool			operator != (Fixed const &toCompare) const;
		bool			operator == (Fixed const &toCompare) const;
		bool			operator <= (Fixed const &toCompare) const;
		bool			operator >= (Fixed const &toCompare) const;
		bool			operator > (Fixed const &toCompare) const;
		bool			operator < (Fixed const &toCompare) const;
		int 			getRawBits( void ) const;
		void 			setRawBits( int const raw );
		float			toFloat(void) const;
		int				toInt(void) const;
		static	Fixed	&Max(Fixed &a, Fixed &b);
		static	Fixed	&Min(Fixed &a, Fixed &b);
		static	Fixed const	&Max(Fixed const &a, Fixed const &b);
		static	Fixed const	&Min(Fixed const &a, Fixed const &b);
		Fixed(Fixed const &toCopy);
		Fixed(int num);
		Fixed(float num);
		Fixed(void);
		~Fixed();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:25:48 by botilia           #+#    #+#             */
/*   Updated: 2022/07/21 13:01:11 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    public:
            Fixed();
            Fixed(const int value);
            Fixed(const float value);
            Fixed(const Fixed& object);
            Fixed& operator=(const Fixed& object);
            ~Fixed();
            int         getRawBits(void) const;
            void        setRawBits(int const raw);
            float       toFloat(void) const;
            int         toInt(void) const;
    private:
            int integer;
            static const int constanta = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& object);

#endif
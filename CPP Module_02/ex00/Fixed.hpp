/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:15:33 by botilia           #+#    #+#             */
/*   Updated: 2022/07/20 15:50:12 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
    public:
            Fixed();
            Fixed(const Fixed& object);
            Fixed& operator = (const Fixed& object);
            ~Fixed();
            int     getRawBits(void) const;
            void    setRawBits(int const raw);
    private:
            int integer;
            static const int constanta = 8;
};

#endif
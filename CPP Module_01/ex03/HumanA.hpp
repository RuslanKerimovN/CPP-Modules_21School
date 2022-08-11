/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:11:53 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 20:06:14 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "HumanA.h"

class HumanA {
    private:
            std::string name;
            Weapon&  weapon;
    public:
            HumanA(std::string name, Weapon&  weapon);
            void    attack();
            ~HumanA();
};

#endif
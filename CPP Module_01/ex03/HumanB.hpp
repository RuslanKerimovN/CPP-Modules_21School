/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:16:08 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 20:09:46 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "HumanB.h"

class HumanB {
    private:
            std::string name;
            Weapon*  weapon;
    public:
            HumanB(std::string name);
            void        setWeapon(Weapon& weapon);
            void        attack();
            ~HumanB();
};

#endif
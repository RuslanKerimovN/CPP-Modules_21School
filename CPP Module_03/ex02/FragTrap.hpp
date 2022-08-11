/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:44:52 by botilia           #+#    #+#             */
/*   Updated: 2022/07/23 15:33:47 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
    public:
            FragTrap();
            FragTrap(std::string name);
            FragTrap(FragTrap& object);
            FragTrap& operator = (const FragTrap& object);
            ~FragTrap();
            
            void    highFivesGuys(void);
            
    private:
};

#endif
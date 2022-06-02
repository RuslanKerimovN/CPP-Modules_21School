/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:13:29 by botilia           #+#    #+#             */
/*   Updated: 2022/05/30 13:37:41 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main(int ac, char **av) 
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		int i = 1;
		while (av[i]) {
			int j = 0;
			while (av[i][j]) {
				if (av[i][j] > 96 && av[i][j] < 123)
					av[i][j] = av[i][j] - 32;
				std::cout << av[i][j];
				j++;
			}
			i++;
		}
		std::cout << "\0" << std::endl;
	}
	return 0;
}
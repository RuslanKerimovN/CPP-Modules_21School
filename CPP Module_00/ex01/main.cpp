/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:18:30 by botilia           #+#    #+#             */
/*   Updated: 2022/06/01 11:50:12 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string	str;
	PhoneBook	book;
	int	i = 0, j = 0;

	while(true)
	{
		if (i == 8)
			i = 0;
		std::cout << "please enter ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, str);
		for (int j = 0; j < (int) str.length(); j++)
			str[j] = std::toupper(str[j]);
		if (!str.compare("ADD")) 
		{
			book.AddCmd(i);
			i++;
			j++;
		}
		else if (!str.compare("SEARCH"))
			book.Search(j);
		else if (!str.compare("EXIT"))
			break;
	}
	std::cout << "Goodbye!!!" << std::endl;
	return 0;
}
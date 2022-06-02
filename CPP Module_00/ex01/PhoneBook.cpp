/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:40:27 by botilia           #+#    #+#             */
/*   Updated: 2022/06/01 11:49:40 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void PhoneBook::AddCmd(int i)
{
	std::string	s;
	Contact		tmp;

	std::cout << "Please enter name:" << std::endl;
	tmp.SetName(AddString(s));
	std::cout << "Please enter surname:" << std::endl;
	tmp.SetSurname(AddString(s));
	std::cout << "Please enter nickname:" << std::endl;
	tmp.SetNickname(AddString(s));
	std::cout << "Please enter phone number:" << std::endl;
	tmp.SetPhoneNumber(AddString(s));
	std::cout << "Please enter your secret:" << std::endl;
	tmp.SetBigSecret(AddString(s));

	AddingToBook(tmp, i);
}

std::string PhoneBook::AddString(std::string s)
{
	bool	check = true;

	std::getline(std::cin, s);
	while (check)
	{
		if (s.empty()) {
			std::cout << "Field is empty! Try one more!" << std::endl;
			std::getline(std::cin, s);
		}
		else
			check = false;
	}
	return s;
}

void PhoneBook::AddingToBook(Contact tmp, int i) { this->phBook[i] = tmp; }

int PhoneBook::CheckIndex(std::string s)
{
	int	checker;

	for (int i = 0; i < (int) s.length(); i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	checker = stoi(s);
	if ((checker > 8 || checker < 1))
		return (0);
	if (phBook[checker - 1].GetName().empty())
	{
		std::cout << "Look at book with more attantion!!!" << std::endl;
		return (0);
	}
	return 1;
}

void PhoneBook::SearchByIndex(void)
{
	std::string	s;
	int			i;

	std::cout << "Enter index please:" << std::endl;
	std::getline(std::cin, s);
	if (!CheckIndex(s))
	{
		std::cout << "Enter index one more time:" << std::endl;
		std::getline(std::cin, s);
	}
	if (!CheckIndex(s))
	{
		std::cout << "Check youre intentions!!!" << std::endl;
		return;
	}
	else
	{
		i = stoi(s) - 1;
		std::cout << phBook[i].GetName() << std::endl;
		std::cout << phBook[i].GetSurname() << std::endl;
		std::cout << phBook[i].GetNickname() << std::endl;
		std::cout << phBook[i].GetPhoneNumber() << std::endl;
		std::cout << phBook[i].GetBigSecret() << std::endl;
	}
}

void PhoneBook::SearchParam(std::string str)
{
	int	lenStr = str.length();

	std::cout << '|';
	if (lenStr >= 10)
		std::cout << str.substr(0,9).append(1,'.');
	else 
	{
		for (int i = 0; i < 10 - (int) str.length(); i++)
			std::cout << ' ';
		for (int i = 0; i < (int) str.length(); i++)
			std::cout << str[i];
	}
}

void PhoneBook::Search(int j)
{
	int	len = j;

	if (j > 8)
		len = 8;
	std::cout << "|   Index  |   Name   |  Surnane | Nickname |" << std::endl;
	for (int k = 0; k < len; k++)
	{
		SearchParam(std::to_string(k + 1));
		SearchParam(phBook[k].GetName());
		SearchParam(phBook[k].GetSurname());
		SearchParam(phBook[k].GetNickname());
		std::cout << '|' << std::endl;
	}
	SearchByIndex();
}
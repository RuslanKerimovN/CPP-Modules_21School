/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:42:48 by botilia           #+#    #+#             */
/*   Updated: 2022/06/01 11:55:46 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string name, std::string surname, std::string nickname, 
	std::string phoneNumber, std::string bigSecret) 
{
	this->name = name;
	this->surname = surname;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->bigSecret = bigSecret;
}

Contact::~Contact() {}

std::string Contact::GetName() const { return name; }

void Contact::SetName(std::string name) { this->name = name; }

std::string Contact::GetSurname() const { return surname; }

void Contact::SetSurname(std::string surname) { this->surname = surname; }

std::string Contact::GetNickname() const { return nickname; }

void Contact::SetNickname(std::string nickname) { this->nickname = nickname; }

std::string Contact::GetPhoneNumber() const { return phoneNumber; }

void Contact::SetPhoneNumber(std::string phoneNumber) { this->phoneNumber = phoneNumber; }

std::string Contact::GetBigSecret() const { return bigSecret; }

void Contact::SetBigSecret(std::string bigSecret) { this->bigSecret = bigSecret; }
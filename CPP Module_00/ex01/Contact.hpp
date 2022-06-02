/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:42:42 by botilia           #+#    #+#             */
/*   Updated: 2022/06/01 11:55:56 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
	private:
		std::string	name;
		std::string	surname;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	bigSecret;

	public:
					Contact();
					Contact(std::string name, std::string surname, std::string nickname, 
							std::string phoneNumber, std::string bigSecret);
					~Contact();

		std::string	GetName() const;
		void		SetName(std::string name);

		std::string	GetSurname() const;
		void		SetSurname(std::string surname);

		std::string	GetNickname() const;
		void		SetNickname(std::string nickname);

		std::string	GetPhoneNumber() const;
		void		SetPhoneNumber(std::string phoneNumber);

		std::string	GetBigSecret() const;
		void		SetBigSecret(std::string bigSecret);

};

#endif
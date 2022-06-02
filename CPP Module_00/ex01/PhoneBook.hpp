/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:41:35 by botilia           #+#    #+#             */
/*   Updated: 2022/06/01 11:56:54 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	phBook[8];

	public:
					PhoneBook(void);
					~PhoneBook(void);
		void		AddCmd(int i);
		std::string	AddString(std::string s);
		void		AddingToBook(Contact tmp, int i);
		int			CheckIndex(std::string s);
		void		SearchByIndex(void);
		void		SearchParam(std::string str);
		void		Search(int i);
};

#endif

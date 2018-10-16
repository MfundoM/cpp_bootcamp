/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   welcome-Display.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:14:58 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/05 15:44:06 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.class.hpp"

void	welcome(void)
{
	std::cout << "*********************************************************" << std::endl;
	std::cout << "*      Please Select One Of The Following Commands:     *" << std::endl;
	std::cout << "*                          ADD                          *" << std::endl;
	std::cout << "*                         SEARCH                        *" << std::endl;
	std::cout << "*                          EXIT                         *" << std::endl;
	std::cout << "*********************************************************" << std::endl;
}

void	display(Contacts contact[], int numbr_of_contact)
{
	std::string	firstname = "";
	std::string lastname = "";
	std::string nickname = "";
	int			max_width = 10;
	int			i = 0;

	std::cout << std::setw(max_width);
	std::cout << "|   index  |first name|last name |nickname  |" << std::endl;
	while (i < numbr_of_contact)
	{
		firstname = contact[i].DisplayFirstName();
		lastname = contact[i].DisplayLastName();
		nickname = contact[i].DisplayNickname();

		std::cout << "|" << std::setw(max_width) << i;
		if (firstname.length() > (unsigned long)max_width)
		{
			firstname = trancate(firstname);
		}
		else
		{
			firstname = firstname;
		}
		std::cout << "|" << std::setw(max_width) << firstname;

		if (lastname.length() > (unsigned long)max_width)
		{
			lastname = trancate(lastname);
		}
		else
		{
			lastname = lastname;
		}
		std::cout << "|" << std::setw(max_width) << lastname;

		if (nickname.length() > (unsigned long)max_width)
		{
			nickname = trancate(nickname);
		}
		else
		{
			nickname = nickname;
		}
		std::cout << "|" << std::setw(max_width) << nickname;
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
}

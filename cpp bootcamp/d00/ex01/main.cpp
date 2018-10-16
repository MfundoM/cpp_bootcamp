/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:47:54 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/05 13:10:34 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.class.hpp"

Contacts	createContacts(void)
{
	Contacts		NewContacts;
	std::string		buff = "";

	std::cout << "Firstname: ";
	std::cin >> buff;
  NewContacts.StoreFirstName(buff);

	std::cout << "Lastname: ";
	std::cin >> buff;
  NewContacts.StoreLastName(buff);

	std::cout << "Nickname: ";
	std::cin >> buff;
  NewContacts.StoreNickname(buff);

	std::cout << "Login: ";
	std::cin >> buff;
  NewContacts.StoreLogin(buff);

	std::cout << "Postal Address: ";
	std::cin >> buff;
  NewContacts.StorePostalAddress(buff);

	std::cout << "Email Address: ";
	std::cin >> buff;
  NewContacts.StoreEmailAddress(buff);

	std::cout << "Phone Number: ";
	std::cin >> buff;
  NewContacts.StorePhoneNumber(buff);

	std::cout << "Birth Date: ";
	std::cin >> buff;
  NewContacts.StoreBirthdayDate(buff);

	std::cout << "Favorite Meal: ";
	std::cin >> buff;
  NewContacts.StoreFavoriteMeal(buff);

	std::cout << "underwear Color: ";
	std::cin >> buff;
  NewContacts.StoreUnderwearColor(buff);

	std::cout << "Darkest Secret: ";
	std::cin >> buff;
  NewContacts.StoreDarkestSecret(buff);

	return (NewContacts);
}

int			main(void)
{
	int 			contact_max = 8;
	int				index = 0;
	std::string		command = "";
	Contacts		PhoneBook[contact_max];

	welcome();
	while(true)
	{
		getline(std::cin, command, '\n');
		if (command == "EXIT")
		{
			break ;
		}
		else if (command == "ADD")
		{
			if (index < contact_max)
			{
				PhoneBook[index++] = createContacts();
			}
			else
			{
				std::cout << "The PhoneBook Is Full Please Delete Some Of The Contacts And Try Again" << std::endl;
			}
		}
		else if (command == "SEARCH")
		{
			if (index >= 0)
			{
				display(PhoneBook, index);
			}
			else
			{
				std::cout << "PhoneBook is empty please add contacts first" << std::endl;
			}
		}
		// else
		// {
		// 	std::cout << "Invalid command entered!. Please enter a valid command." << std::endl;
		// }
	}
	return 0;
}

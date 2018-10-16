/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:35:51 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/05 11:29:48 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>

class Contacts {
	public:
		Contacts(void);
		~Contacts(void);

		void	StoreFirstName(std::string);
		void	StoreLastName(std::string);
		void	StoreNickname(std::string);
		void	StoreLogin(std::string);
		void	StorePostalAddress(std::string);
		void	StoreEmailAddress(std::string);
		void	StorePhoneNumber(std::string);
		void	StoreBirthdayDate(std::string);
		void	StoreFavoriteMeal(std::string);
		void	StoreUnderwearColor(std::string);
		void	StoreDarkestSecret(std::string);

		std::string		DisplayFirstName(void);
		std::string		DisplayLastName(void);
		std::string		DisplayNickname(void);
		std::string		DisplayLogin(void);
		std::string		DisplayPostalAddress(void);
		std::string		DisplayEmailAddress(void);
		std::string		DisplayPhoneNumber(void);
		std::string		DisplayBirthdayDate(void);
		std::string		DisplayFavoriteMeal(void);
		std::string		DisplayUnderwearColor(void);
		std::string		DisplayDarkestSecret(void);

	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_login;
		std::string		_postalAddress;
		std::string		_emailAddress;
		std::string		_phoneNumber;
		std::string		_birthdayDate;
		std::string		_favoriteMeal;
		std::string		_underwearColor;
		std::string		_darkestSecret;

};

void 				welcome(void);
void 				display(Contacts contact[], int numbr_of_contact);
std::string	trancate(std::string column);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:31:28 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/05 11:29:55 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.class.hpp"

Contacts::Contacts(void)
{
	return ;
}

Contacts::~Contacts(void)
{
	return ;
}

void			Contacts::StoreFirstName(std::string firstName)
{
	this->_firstName = firstName;
	return ;
}

void			Contacts::StoreLastName(std::string lastName)
{
	this->_lastName = lastName;
	return ;
}

void			Contacts::StoreNickname(std::string nickname)
{
	this->_nickname = nickname;
	return ;
}

void			Contacts::StoreLogin(std::string login)
{
	this->_login = login;
	return ;
}

void			Contacts::StorePostalAddress(std::string postalAddress)
{
	this->_postalAddress = postalAddress;
	return ;
}

void			Contacts::StoreEmailAddress(std::string emailAddress)
{
	this->_emailAddress = emailAddress;
	return ;
}

void			Contacts::StorePhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
	return ;
}

void			Contacts::StoreBirthdayDate(std::string birthdayDate)
{
	this->_birthdayDate = birthdayDate;
	return ;
}

void			Contacts::StoreFavoriteMeal(std::string favoriteMeal)
{
	this->_favoriteMeal = favoriteMeal;
	return ;
}

void			Contacts::StoreUnderwearColor(std::string underwearColor)
{
	this->_underwearColor = underwearColor;
	return ;
}

void			Contacts::StoreDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
	return ;
}

std::string	Contacts::DisplayFirstName()
{
	return (this->_firstName);
}

std::string	Contacts::DisplayLastName()
{
	return (this->_lastName);
}

std::string	Contacts::DisplayNickname()
{
	return (this->_nickname);
}

std::string	Contacts::DisplayLogin()
{
	return (this->_login);
}

std::string	Contacts::DisplayPostalAddress()
{
	return (this->_postalAddress);
}

std::string	Contacts::DisplayEmailAddress()
{
	return (this->_emailAddress);
}

std::string	Contacts::DisplayPhoneNumber()
{
	return (this->_phoneNumber);
}

std::string	Contacts::DisplayBirthdayDate()
{
	return (this->_birthdayDate);
}

std::string	Contacts::DisplayFavoriteMeal()
{
	return (this->_favoriteMeal);
}

std::string	Contacts::DisplayUnderwearColor()
{
	return (this->_underwearColor);
}

std::string	Contacts::DisplayDarkestSecret()
{
	return (this->_darkestSecret);
}

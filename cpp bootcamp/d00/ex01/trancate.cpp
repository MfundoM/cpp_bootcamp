/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trancate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:11:36 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/05 15:24:28 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.class.hpp"

std::string		trancate(std::string column)
{
	column = column.erase((10 - 1), column.length() - (10 - 1));
	column.append(".");
	return (column);
}

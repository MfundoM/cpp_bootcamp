/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 07:49:30 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/12 07:49:32 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try {
      Bureaucrat test;

      test.setName("Test1");
      test.setGrade(3);
      test.increment();

      std::cout << test;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
    return (0);
}

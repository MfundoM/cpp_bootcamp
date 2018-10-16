/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 07:49:30 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/12 10:24:49 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat bureaucrat;
    Form form;
    Form        form1 = Form("Form1", 42, 42);
    Form        form2 = Form("Form2", 20, 50);
    Bureaucrat  bureaucrat1 = Bureaucrat("Administrative", 1);
    Bureaucrat  bureaucrat2 = Bureaucrat("Ministerial", 21);

    try {
      bureaucrat2.signForm(form2);
      std::cout << bureaucrat2;
      std::cout << form2 << std::endl;

      bureaucrat1.signForm(form1);
      std::cout << bureaucrat1;
      std::cout << form1 << std::endl;

      bureaucrat2.signForm(form1);
      std::cout << bureaucrat2;
      std::cout << form1;
    } catch (std::exception &e) {
      std::cout << e.what();
    }

    return (0);
}

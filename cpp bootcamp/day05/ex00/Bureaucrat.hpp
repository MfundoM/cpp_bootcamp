/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 07:49:10 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/12 07:49:13 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat {
	public:
		 class GradeTooHighException : public std::exception {
		 public:
				const char *what() const throw();
		 };

		 class GradeTooLowException : public std::exception {
		 public:
				const char *what() const throw();
		 };

		 Bureaucrat(void);
		 Bureaucrat(std::string name, int grade);
		 ~Bureaucrat(void);

		 Bureaucrat &operator=(Bureaucrat const &rhs);
		 void	    setGrade(int grade);
		 void     setName(std::string name);
		 int	    getGrade(void) const;
		 std::string	    getName(void) const;
		 void 	  increment(void);
		 void	    decrement(void);

	private:
		 int	      	_grade;
		 std::string  _name;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif

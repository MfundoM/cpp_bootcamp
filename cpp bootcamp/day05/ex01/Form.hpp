/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 08:34:06 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/12 10:26:02 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {
	public:
		class GradeTooLowException : public std::exception {
		 public:
				const char *what() const throw();
		 };

		 class GradeTooHighException : public std::exception {
		 public:
				const char *what() const throw();
		 };

		 Form(void);
		 Form(std::string name, int GradeToSign, int GradeToExecute);
		 ~Form(void);

		 void			beSigned(Bureaucrat &bureaucrat);
		 Form			&operator=(Form const &rhs);
		 int			getGradeToSign(void) const;
		 int			getGradeToExecute(void) const;
		 bool			checkSigned(void) const;
		 std::string 	getName(void) const;

	private:
		 const int			_gradeToSign;
		 const int  		_gradeToExecute;
		 bool				_signed;
		 const std::string	_name;
};

std::ostream  &operator<<(std::ostream &o, Form const &rhs);

#endif

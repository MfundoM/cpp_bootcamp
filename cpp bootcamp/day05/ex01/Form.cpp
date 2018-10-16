/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 08:56:41 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/12 10:38:54 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _gradeToSign(1), _gradeToExecute(1), _signed(false),
	_name("Form")
{
	return ;
}

Form::Form(std::string name, int GradeToSign, int GradeToExecute) :
	_gradeToSign(GradeToSign), _gradeToExecute(GradeToExecute), _signed(false),
	_name(name)
{
	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150) {
		throw Form::GradeTooLowException::GradeTooLowException();
	} else if (this->_gradeToSign < 1 || this->_gradeToExecute < 1) {
		throw Form::GradeTooHighException::GradeTooHighException();
	}
	return ;
}

Form::~Form(void) {
	return ;
}

Form &Form::operator=(Form const &rhs) {
	if (this != &rhs) {
		this->_signed = rhs._signed;
	}
	return (*this);
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade too low!!!");
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade too high!!!");
}

void	Form::beSigned(Bureaucrat &bureaucrate) {
	if (bureaucrate.getGrade() > this->_gradeToSign) {
		throw GradeTooLowException::GradeTooLowException();
	} else {
		this->_signed = true;
	}
	return ;
}

int		Form::getGradeToSign(void) const {
	return (this->_gradeToSign);
}

int		Form::getGradeToExecute(void) const {
	return (this->_gradeToExecute);
}

std::string	Form::getName(void) const {
	return (this->_name);
}

bool	Form::checkSigned(void) const {
	return (this->_signed);
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {
o << "This form was " << (rhs.checkSigned() ? "" : "not ") \
        << " signed, it required a grade " << rhs.getGradeToSign() \
        << " to sign, and grade " << rhs.getGradeToExecute() << " to be executed." \
        << std::endl;
    return (o);
}

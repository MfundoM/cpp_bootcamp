/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 07:49:18 by mmthethw          #+#    #+#             */
/*   Updated: 2018/06/12 10:22:44 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) {
	_name = "Bureacrat";
	_grade = 1;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade > 150) {
		throw Bureaucrat::GradeTooLowException::GradeTooLowException();
	} else if (grade < 1) {
		throw Bureaucrat::GradeTooHighException::GradeTooHighException();
	} else {
		this->_name = name;
		this->_grade = grade;
	}
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    if (this != &rhs)
    {
        this->_name  = rhs._name;
        this->_grade = rhs._grade;
    }
    return (*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low!!!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high!!!");
}

void Bureaucrat::setName(std::string name) {
    this->_name = name;
    return ;
}

void Bureaucrat::setGrade(int grade) {
    if (grade > 150) {
        throw Bureaucrat::GradeTooLowException::GradeTooLowException();
    } else if (grade < 1) {
        throw Bureaucrat::GradeTooHighException::GradeTooHighException();
    } else {
        this->_grade = grade;
    }
    return ;
}

void Bureaucrat::increment(void) {
    if (this->_grade <= 1) {
        throw Bureaucrat::GradeTooHighException::GradeTooHighException();
    } else {
        this->_grade--;
    }
    return ;
}

void Bureaucrat::decrement(void) {
    if (this->_grade >= 150) {
        throw Bureaucrat::GradeTooLowException::GradeTooLowException();
    } else {
        this->_grade++;
    }
    return ;
}

std::string Bureaucrat::getName(void) const {
    return (this->_name);
}

int Bureaucrat::getGrade(void) const {
    return (this->_grade);
}

void	Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << "<" << this->_name << "> signs <" << form.getName() << ">" << std::endl;
	} catch (std::exception &e) {
		std::cout << "<<" << this->_name << "> cannot sign <" << form.getName() << "> because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << "<" << rhs.getName() << ">" << ", bureaucrat grade " << "<" << rhs.getGrade() << ">" << std::endl;
    return (o);
}

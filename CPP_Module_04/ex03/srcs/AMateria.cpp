/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluchten <fluchten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:19:29 by fluchten          #+#    #+#             */
/*   Updated: 2023/06/19 10:21:56 by fluchten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* ************************************************************************** */
/*                               Canonical form                               */
/* ************************************************************************** */

AMateria::AMateria(void) : _type("Default")
{
	// std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type)
{
	// std::cout << "AMateria set type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& rhs)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = rhs;
}

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	// std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

AMateria::~AMateria(void)
{
	// std::cout << "AMateria destructor called" << std::endl;
}

/* ************************************************************************** */
/*                          Public Member functions                           */
/* ************************************************************************** */

const std::string &AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

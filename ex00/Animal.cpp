/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:41:22 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 16:59:31 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/****************** Constructors ********************/

Animal::Animal() : type("Animal")
{
	std::cout << "Animal: Default constructor is called\n";
}

Animal::Animal(const Animal& original) : type(original.type)
{
	std::cout << "Animal: Copy constructor is called\n";
}

Animal& Animal::operator=(const Animal& original)
{
	std::cout << "Animal: Copy assignment overloading constructor is called\n";
	type = original.type;
	return (*this);
}

/******************* Destructor *********************/

Animal::~Animal()
{
	std::cout << "Animal: Destructor is called\n";
}

/***************** Member Functions *****************/

void	Animal::makeSound() const
{
	std::cout << "Animal Sound\n";
}

std::string	Animal::getType() const
{
	return (type);
}

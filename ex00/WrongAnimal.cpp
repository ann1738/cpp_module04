/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:41:22 by anasr             #+#    #+#             */
/*   Updated: 2022/06/02 10:57:23 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/****************** Constructors ********************/

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal: Default constructor is called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& original) : type(original.type)
{
	std::cout << "WrongAnimal: Copy constructor is called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& original)
{
	std::cout << "WrongAnimal: Copy assignment overloading constructor is called\n";
	if (this != &original)
		type = original.type;
	return (*this);
}

/******************* Destructor *********************/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor is called\n";
}

/***************** Member Functions *****************/

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound\n";
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

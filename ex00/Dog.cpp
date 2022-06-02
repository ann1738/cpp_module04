/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:07 by anasr             #+#    #+#             */
/*   Updated: 2022/06/02 10:57:12 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/****************** Constructors ********************/

Dog::Dog()
{
	std::cout << "Dog: Default constructor is called\n";
	type = "Dog";
}

Dog::Dog(const Dog& original) : Animal()
{
	std::cout << "Dog: Copy constructor is called\n";
	type = original.type;
}

Dog& Dog::operator=(const Dog& original)
{
	std::cout << "Dog: Copy assignment overloading constructor is called\n";
	if (this != &original)
		type = original.type;
	return (*this);
}

/******************* Destructor *********************/

Dog::~Dog()
{
	std::cout << "Dog: Destructor is called\n";
}

/***************** Member Functions *****************/

void	Dog::makeSound() const
{
	std::cout << "Whoof!\n";
}

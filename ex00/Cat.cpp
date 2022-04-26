/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:10 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 17:09:15 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/****************** Constructors ********************/

Cat::Cat()
{
	std::cout << "Cat: Default constructor is called\n";
	type = "Cat";
}

Cat::Cat(const Cat& original) : Animal(original)
{
	std::cout << "Cat: Copy constructor is called\n";
	type = original.type;
}

Cat& Cat::operator=(const Cat& original)
{
	std::cout << "Cat: Copy assignment overloading constructor is called\n";
	type = original.type;
	return (*this);
}

/******************* Destructor *********************/

Cat::~Cat()
{
	std::cout << "Cat: Destructor is called\n";
}

/***************** Member Functions *****************/

void	Cat::makeSound() const
{
	std::cout << "Meow!\n";
}

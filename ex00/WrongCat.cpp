/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:10 by anasr             #+#    #+#             */
/*   Updated: 2022/05/26 08:09:57 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/****************** Constructors ********************/

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor is called\n";
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& original) : WrongAnimal()
{
	std::cout << "WrongCat: Copy constructor is called\n";
	type = original.type;
}

WrongCat& WrongCat::operator=(const WrongCat& original)
{
	std::cout << "WrongCat: Copy assignment overloading constructor is called\n";
	type = original.type;
	return (*this);
}

/******************* Destructor *********************/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor is called\n";
}

/***************** Member Functions *****************/

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meow!\n";
}

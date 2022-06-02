/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:07 by anasr             #+#    #+#             */
/*   Updated: 2022/06/02 11:02:04 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/****************** Constructors ********************/

Dog::Dog()
{
	std::cout << "Dog: Default constructor is called\n";
	type = "Dog";
	my_brain = new Brain;
}

Dog::Dog(const Dog& original) : Animal()
{
	std::cout << "Dog: Copy constructor is called\n";
	my_brain = new Brain(*original.my_brain);
	type = original.type;
}

Dog& Dog::operator=(const Dog& original)
{
	std::cout << "Dog: Copy assignment overloading constructor is called\n";
	if (this != &original)
	{
		my_brain = new Brain(*original.my_brain);
		type = original.type;
	}
	return (*this);
}

/******************* Destructor *********************/

Dog::~Dog()
{
	std::cout << "Dog: Destructor is called\n";
	delete my_brain;
}

/***************** Member Functions *****************/

void	Dog::makeSound() const
{
	std::cout << "Whoof!\n";
}

void	Dog::setIdea(std::string some_idea, int i)
{
	this->my_brain->ideas[i] = some_idea;
}

std::string	Dog::getIdea(int i) const
{
	return (my_brain->ideas[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:10 by anasr             #+#    #+#             */
/*   Updated: 2022/05/26 08:40:54 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/****************** Constructors ********************/

Cat::Cat()
{
	std::cout << "Cat: Default constructor is called\n";
	type = "Cat";
	my_brain = new Brain;
}

Cat::Cat(const Cat& original) : Animal()
{
	std::cout << "Cat: Copy constructor is called\n";
	my_brain = new Brain(*original.my_brain);
	type = original.type;
}

Cat& Cat::operator=(const Cat& original)
{
	std::cout << "Cat: Copy assignment overloading constructor is called\n";
	my_brain = new Brain(*original.my_brain);
	type = original.type;
	return (*this);
}

/******************* Destructor *********************/

Cat::~Cat()
{
	std::cout << "Cat: Destructor is called\n";
	delete my_brain;
}

/***************** Member Functions *****************/

void	Cat::makeSound() const
{
	std::cout << "Meow!\n";
}

void	Cat::setIdea(std::string some_idea, int i)
{
	this->my_brain->ideas[i] = some_idea;
}

std::string	Cat::getIdea(int i) const
{
	return (my_brain->ideas[i]);
}

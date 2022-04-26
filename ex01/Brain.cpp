/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:42:49 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 18:22:11 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/****************** Constructors ********************/

Brain::Brain()
{
	std::cout << "Brain: Default constructor is called\n";
}

Brain::Brain(const Brain& original)
{
	std::cout << "Brain: Copy constructor is called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = original.ideas[i];
}

Brain& Brain::operator=(const Brain& original)
{
	std::cout << "Brain: Copy assignment overloading constructor is called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = original.ideas[i];
	return (*this);
}

/******************* Destructor *********************/

Brain::~Brain()
{
	std::cout << "Brain: Destructor is called\n";
}

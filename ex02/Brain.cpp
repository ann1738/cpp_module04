/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:42:49 by anasr             #+#    #+#             */
/*   Updated: 2022/06/02 11:03:18 by ann              ###   ########.fr       */
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
	if (this != &original)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = original.ideas[i];
	}
	return (*this);
}

/******************* Destructor *********************/

Brain::~Brain()
{
	std::cout << "Brain: Destructor is called\n";
}

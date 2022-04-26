/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:16 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 16:53:02 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
public:
/******************Constructors********************/
	Dog();
	Dog(const Dog& original);
	Dog& operator=(const Dog& original);

/******************Destructor********************/
	~Dog();

/******************Member Functions********************/
	void	makeSound() const;
};

#endif

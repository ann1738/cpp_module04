/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:16 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 17:48:57 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
private:
	Brain *my_brain;
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

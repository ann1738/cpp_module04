/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:41:20 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 16:59:08 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
protected:
	std::string type;
public:
/******************Constructors********************/
	Animal();
	Animal(const Animal& original);
	Animal& operator=(const Animal& original);

/******************Destructor********************/
	virtual ~Animal();

/******************Member Functions********************/
	virtual void	makeSound() const;
	std::string		getType() const;
};

#endif

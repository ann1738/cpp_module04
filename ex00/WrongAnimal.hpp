/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:41:20 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 17:13:04 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
protected:
	std::string type;
public:
/******************Constructors********************/
	WrongAnimal();
	WrongAnimal(const WrongAnimal& original);
	WrongAnimal& operator=(const WrongAnimal& original);

/******************Destructor********************/
	~WrongAnimal();

/******************Member Functions********************/
	void	makeSound() const;
	std::string		getType() const;
};

#endif

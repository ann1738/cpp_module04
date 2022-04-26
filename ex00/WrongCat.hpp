/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:13 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 17:14:45 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
public:
/******************Constructors********************/
	WrongCat();
	WrongCat(const WrongCat& original);
	WrongCat& operator=(const WrongCat& original);

/******************Destructor********************/
	~WrongCat();

/******************Member Functions********************/
	void	makeSound() const;
};

#endif

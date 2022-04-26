/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:13 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 16:53:00 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
public:
/******************Constructors********************/
	Cat();
	Cat(const Cat& original);
	Cat& operator=(const Cat& original);

/******************Destructor********************/
	~Cat();

/******************Member Functions********************/
	void	makeSound() const;
};

#endif

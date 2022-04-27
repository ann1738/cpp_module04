/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:16 by anasr             #+#    #+#             */
/*   Updated: 2022/04/27 13:18:02 by ann              ###   ########.fr       */
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
	void		makeSound() const;
	void		setIdea(std::string some_idea, int i);
	std::string	getIdea(int i) const;
};

#endif

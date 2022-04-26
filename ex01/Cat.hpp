/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:13 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 18:42:30 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
private:
	Brain *my_brain;
public:
/******************Constructors********************/
	Cat();
	Cat(const Cat& original);
	Cat& operator=(const Cat& original);

/******************Destructor********************/
	~Cat();

/******************Member Functions********************/
	void	makeSound() const;
	void	setIdea(std::string some_idea, int i);
	void	getIdea(int i) const;
};

#endif

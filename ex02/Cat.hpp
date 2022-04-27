/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:52:13 by anasr             #+#    #+#             */
/*   Updated: 2022/04/27 13:18:09 by ann              ###   ########.fr       */
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
	void		makeSound() const;
	void		setIdea(std::string some_idea, int i);
	std::string	getIdea(int i) const;
};

#endif

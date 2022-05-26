/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 08:56:39 by ann               #+#    #+#             */
/*   Updated: 2022/05/26 08:57:52 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class	AMateria
{
protected:
	std::string type;
public:
/******************Constructors********************/
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& original);
	AMateria& operator=(const AMateria& original);

/******************Destructor********************/
	~AMateria();

/******************Member Functions********************/
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 08:56:42 by ann               #+#    #+#             */
/*   Updated: 2022/05/26 08:56:43 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/****************** Constructors ********************/

AMateria::AMateria()
{
	std::cout << "Default constructor is called\n";
}

AMateria::AMateria(const AMateria& original)
{
	std::cout << "Copy constructor is called\n";
}

AMateria& AMateria::operator=(const AMateria& original)
{
	std::cout << "Copy assignment overloading constructor is called\n";
}

/******************* Destructor *********************/

AMateria::~AMateria()
{
	std::cout << "Destructor is called\n";
}

/***************** Member Functions *****************/


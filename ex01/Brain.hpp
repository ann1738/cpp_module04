/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:42:45 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 17:53:40 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
public:
	std::string ideas[100];
/******************Constructors********************/
	Brain();
	Brain(const Brain& original);
	Brain& operator=(const Brain& original);

/******************Destructor********************/
	~Brain();
};

#endif

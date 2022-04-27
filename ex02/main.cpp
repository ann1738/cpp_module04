/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:05:08 by anasr             #+#    #+#             */
/*   Updated: 2022/04/27 14:02:20 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

/* ************************************************************************** */
/* This exercise is about the concept of pure virtual functions and abstract  */
/* 									classes.                                  */
/* ************************************************************************** */

int main()
{
	std::cout << "\e[94m*** START OF TESTING ***\e[0m\n\n";
	
	/* If we try to instantiate an object of class Animal..*/
	
	// Animal a1;
	
	/* or..                                                */
	
	// Animal *a2 = new Animal();

	/* it shows an error since there exists a pure virtual function with no  */
	/* definition in the base class. However, instantiating derived classes  */
	/* works fine as all functions are defined.                              */

	Animal *c = new Cat();
	Animal *d = new Dog();

	c->makeSound();
	d->makeSound();

	delete d;
	delete c;	

	std::cout << "\n\e[94m*** END OF TESTING ***\e[0m\n";
}
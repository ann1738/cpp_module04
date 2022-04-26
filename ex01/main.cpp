/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:05:08 by anasr             #+#    #+#             */
/*   Updated: 2022/04/26 18:39:14 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

# define ARRAY_SIZE 2

int main()
{
	std::cout << "\e[94m*** START OF TESTING ***\e[0m\n\n";

	{
		std::cout << "\e[96m*** TEST 1: an array of Animal Class half filled with Dogs and the other half Cats***\e[0m\n\n";
		Animal *animal_array[ARRAY_SIZE];
		for (int i = 0; i < ARRAY_SIZE / 2; i++)
			animal_array[i] = new Dog();
		for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; i++)
			animal_array[i] = new Cat();
		for (int i = 0; i < ARRAY_SIZE; i++)
			delete animal_array[i];
	}
	{
		std::cout << "\e[96m*** TEST 2: does the program do deep copy?***\e[0m\n\n";
		
		Animal *a1 = new Dog();
		Animal a2(*a1);
	}
	
	std::cout << "\n\e[94m*** END OF TESTING ***\e[0m\n";
}
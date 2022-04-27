/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:05:08 by anasr             #+#    #+#             */
/*   Updated: 2022/04/27 13:42:30 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

# define ARRAY_SIZE 2

int main()
{
	std::cout << "\e[94m*** START OF TESTING ***\e[0m\n\n";

	{
		std::cout << "\n\e[96m*** TEST 1: an array of Animal Class half filled with Dogs and the other half Cats***\e[0m\n";
		Animal *animal_array[ARRAY_SIZE];
		for (int i = 0; i < ARRAY_SIZE / 2; i++)
			animal_array[i] = new Dog();
		for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; i++)
			animal_array[i] = new Cat();
		for (int i = 0; i < ARRAY_SIZE; i++)
			delete animal_array[i];
	}
	{
		std::cout << "\n\e[96m*** TEST 2: does the program do deep copy?***\e[0m\n";
		
		// Animal *a1 = new Dog();
		// a1->setIdea(0, "hey this is an idea!");
		Dog a1;
		a1.setIdea("hey this is an idea!", 0);
		Dog a2(a1);
		a2.setIdea("Another idea!", 0);
		std::cout << "\e[95ma1's idea is \"" << a1.getIdea(0) << "\", and a2's idea is \"" << a2.getIdea(0) << "\"\e[0m\n";

		Cat c1;
		c1.setIdea("hey this is an idea!", 0);
		Cat c2 = c1;
		c2.setIdea("Another idea!", 0);
		std::cout << "\e[95mc1's idea is \"" << c1.getIdea(0) << "\", and c2's idea is \"" << c2.getIdea(0) << "\"\e[0m\n";
	}
	{
		std::cout << "\n\e[96m*** TEST 3: subject file leak test***\e[0m\n";
		
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << "\n\e[94m*** END OF TESTING ***\e[0m\n";
}
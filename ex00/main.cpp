/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:05:08 by anasr             #+#    #+#             */
/*   Updated: 2022/06/02 11:09:18 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

static void	print_sound(const Animal *an)
{
	an->makeSound();
}

int main()
{
	{
		std::cout << "\e[94mTEST 1: subject file test (if virtual keyword works)\e[0m\n";
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound(); //will output the dog soung!
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}
	{
		std::cout << "\n\e[94mTEST 2: what happens if virtual keyword is not used\e[0m\n";
		const WrongAnimal* w_animal = new WrongAnimal();
		const WrongAnimal* w_cat = new WrongCat();

		std::cout << w_animal->getType() << " " << std::endl;
		std::cout << w_cat->getType() << " " << std::endl;

		w_animal->makeSound();
		w_cat->makeSound(); //will not output WrongCat sound "Wrong Meow!"

		delete w_cat;
		delete w_animal;
	}
	{
		std::cout << "\n\e[94mTEST 3: additional test (using external function)\e[0m\n";
		const Animal* a_animal = new Animal();
		const Animal* a_dog = new Dog();
		const Animal* a_cat = new Cat();

		print_sound(a_animal);
		print_sound(a_dog);
		print_sound(a_cat);

		delete a_cat;
		delete a_dog;
		delete a_animal;
	}
	std::cout << "\n\e[94m*** END OF TESTS ***\e[0m\n";
}

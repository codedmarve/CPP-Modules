/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 03:15:24 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/22 03:15:24 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Animal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	std::string partition(50, '-');

	// Animal animal();  // Animal class can no longer be instantiated

	std::cout << partition << std::endl;
	std::cout << "ANIMAL ARRAY\n";
	std::cout << partition << std::endl;
	{
		Animal *animals[4];
		animals[0] = new Cat();
		animals[1] = new Dog();
		animals[2] = new Cat();
		animals[3] = new Dog();
		for (int i = 0; i < 4; i++)
			animals[i]->makeSound();
		for (int i = 0; i < 4; i++)
			delete animals[i];
	}

	std::cout << partition << std::endl;
	std::cout << "CAT BRAIN\n";
	std::cout << partition << std::endl;
	{
		Cat cat;
		cat.setIdeas(34, "loud");
		std::cout << cat.getIdeas(34) << std::endl;
		for (int i = 0; i < 50; i++)
			cat.setIdeas(i, "no clue");
		Cat bluecat(cat);
		for (int i = 0; i < 100; i++)
			std::cout << bluecat.getIdeas(i) << std::endl;	

		bluecat.setIdeas(6, "newthings");
		std::cout << "Bluecat: " << bluecat.getIdeas(6) << std::endl;
		std::cout << "Cat: " << cat.getIdeas(6) << std::endl;
	}

	std::cout << partition << std::endl;
	std::cout << "DOG BRAIN\n";
	std::cout << partition << std::endl;
	{
		Dog dog;
		dog.setIdeas(69, "eat.sleep.repeat");
		std::cout << dog.getIdeas(69) << std::endl;
		for (int i = 0; i < 50; i++)
			dog.setIdeas(i, "no brainer");
		Dog dawg(dog);
		for (int i = 0; i < 100; i++)
			std::cout << dawg.getIdeas(i) << std::endl;	
		dawg.setIdeas(6, "run");
		std::cout << "dawg: " << dawg.getIdeas(6) << std::endl;
		std::cout << "dog: " << dog.getIdeas(6) << std::endl;
		dog.setIdeas(101, "ad");
		dog.getIdeas(101);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:16:36 by juhyeonl          #+#    #+#             */
/*   Updated: 2026/01/08 22:38:34 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal test;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << "===== Array of Animals Test =====" << std::endl;
	int size = 4;
	Animal* animals[size];
	for (int k = 0; k < size; k++)
	{
		if (k < size / 2)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}
	std::cout << std::endl;
	for (int k = 0; k < size; k++)
		delete animals[k];
	std::cout << std::endl;
	std::cout << "===== Deep Copy Test =====" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "===== Assignment Operator Test =====" << std::endl;
	Dog dog1;
	Dog dog2;
	dog2 = dog1;
	return 0;
}
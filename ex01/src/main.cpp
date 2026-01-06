/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:16:36 by juhyeonl          #+#    #+#             */
/*   Updated: 2026/01/06 07:42:43 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;// Should not create a leak
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
        Dog tmp = basic; 
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:23:51 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/20 20:32:36 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    std::cout << "\n============= VECTOR TEST =============" << std::endl;
    std::vector<int> vecInt;

    vecInt.push_back(1);
	vecInt.push_back(4);
	vecInt.push_back(3);
	vecInt.push_back(2);
	vecInt.push_back(-2);
	vecInt.push_back(-1);

    try
    {
        std::cout << "Checking for Element 200: " << *::easyfind(vecInt, 200) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Checking for Element -1: " << *::easyfind(vecInt, -1) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "\n============= LIST TEST =============" << std::endl;
    std::list<int> listInt;

    listInt.push_back(15);
    listInt.push_back(25);
    listInt.push_back(35);
    listInt.push_back(45);
    listInt.push_back(55);
    listInt.push_back(35);
    listInt.push_back(45);

    try
    {
        std::cout << "Checking for Element 1: " << *::easyfind(listInt, 1) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Checking for Element 55: " << *::easyfind(listInt, 55) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n============= DEQUE TEST =============" << std::endl;
    std::deque<int> dequeInt;

    dequeInt.push_back(10);
    dequeInt.push_back(20);
    dequeInt.push_back(30);
    dequeInt.push_back(40);
    dequeInt.push_back(50);
    dequeInt.push_back(60);

    try
    {
        std::cout << "Checking for Element 1: " << *::easyfind(dequeInt, 1) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Checking for Element 50: " << *::easyfind(dequeInt, 50) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
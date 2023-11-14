/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:54:45 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/14 16:43:30 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main(void)
{
    std::cout << std::endl;
    
    {
        Array<int> emptyArray;
        std::cout << "TEST 1 - Size of emptyArray: " << emptyArray.size() << std::endl;
    }
    std::cout << std::endl;

   {
        Array<int> fibonacciArray(10);
        std::cout << "Try to print empty array: ";
        fibonacciArray.print();
        int a = 0, b = 1;
        for (unsigned int i = 0; i < fibonacciArray.size(); i++)
        {
            fibonacciArray[i] = a;
            int temp = a + b;
            a = b;
            b = temp;
        }
        fibonacciArray.print();
        // lets throw exception
        std::cout << fibonacciArray[-1];
    }
    std::cout << std::endl;
}
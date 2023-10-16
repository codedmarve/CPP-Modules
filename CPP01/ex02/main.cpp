/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:33:26 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/22 12:33:26 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";

	std::string* stringPTR = &string;
	std::string& stringREF = string;


	std::cout << &string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}

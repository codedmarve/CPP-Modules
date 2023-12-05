/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:14:52 by moduwole          #+#    #+#             */
/*   Updated: 2023/12/05 13:25:29 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{	
	if (ac != 2) {
		std::cout << "Expected input: ./RPN <expression>\n";
		return 1;
	}

	RPN reversedPolishNotation;

	try {
		std::cout << reversedPolishNotation.calculate(av[1]) << "\n";
	}
	catch(const std::exception& e) {
		std::cerr << e.what();
	}
	return 0;
}
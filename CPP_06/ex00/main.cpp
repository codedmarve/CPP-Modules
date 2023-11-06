/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 06:44:07 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/06 06:56:17 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int ac, char **av) {
    if (ac != 2) {
        return (std::cerr << "enter one argument" << std::endl, 1);
    }

    std::string str(av[1]);
    ScalarConverter::convert(str); // since it's static, 
	// it allows us to use it as a utility w/o having to instantiate an object !!!

    return 0;
}
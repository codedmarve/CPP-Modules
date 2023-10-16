/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 02:20:54 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/06 02:20:54 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i = 1, j;
	
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else{
		while (argv[i]){
			j = 0;
			while (argv[i][j]){
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
	}
	std::cout << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:58:14 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/26 15:58:14 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileData.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: program must take a file and two strings" << std::endl;
		return 1;
	}

	FileData	file(argv[1]);
	file.replace(argv[2], argv[3]);
	return 0;
}
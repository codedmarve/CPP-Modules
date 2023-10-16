/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:18:41 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/10 12:18:41 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Programme must take an argument" << std::endl;
		return 1;
	}
	Harl	harl;
	harl.complain(argv[1]);
}
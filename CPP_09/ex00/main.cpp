/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:25:32 by moduwole          #+#    #+#             */
/*   Updated: 2023/12/05 03:00:08 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return ((std::cerr << "Usage: " << argv[0] << " <filename.csv>\n"), 1);
    
	BitcoinExchange btc("data.csv", argv[1]);
    return 0;
}
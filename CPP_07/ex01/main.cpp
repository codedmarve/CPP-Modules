/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:19:43 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/14 12:27:39 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
    std::string array1[3] = {"Marvellous", "Tobi", "Oduwole"};

    iter(array1, 3, print);

    std::cout << std::endl;

    float array2[5] = {1.2f, 3.3333f, 0.0007f, 78, .2f};

    iter(array2, 5, print);

    std::cout << std::endl;
    
    return 0;
}
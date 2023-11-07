/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:41:20 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/07 04:38:10 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	std::cout << std::endl;
	Base* ptr;

	   	ptr = generate();
	    Base& refr = *ptr;

  		identify(ptr);
    	identify(refr);
		
    	delete ptr;
    	std::cout << std::endl;

    return 0;
}
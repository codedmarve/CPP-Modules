/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:07:18 by moduwole          #+#    #+#             */
/*   Updated: 2023/12/05 15:28:12 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{	
	if (ac < 2)
    {
		std::cout << "Usage: ./PmergeMe <sequence of integers>\n";
		return 1;
	}
	
	PmergeMe sorter;
	
	try  {
		sorter.parseInput(ac, av);
		std::cout << "Before:	";
		sorter.printContainer(); 
		
		std::clock_t start_vec = std::clock();
		sorter.sortVector();
		std::clock_t end_vec = std::clock();

		std::clock_t start_deq = std::clock();
		sorter.sortDeque();
		std::clock_t end_deq = std::clock();
		
		std::cout << "After:	";
		sorter.printContainer();

        double  vecTime = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC * 1e6;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " 
			<< vecTime << "us\n";
		
        double  deqTime = static_cast<double>(end_deq - start_deq) / CLOCKS_PER_SEC * 1e6;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " 
			<< deqTime << "us\n";
	
	}
	catch(const std::exception& e) {
		std::cerr << e.what();
		return 1;
	}
	return 0;
}
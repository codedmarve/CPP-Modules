/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 00:09:14 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/26 01:58:27 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scan.hpp"

int main()
{

    std::cout << "\n========= subject pdf test ==================" << std::endl;
    Span  sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  

    std::cout << "\n\n----------- Test 1: Empty container -------------" << std::endl;
	Span    empty;
	try {
        empty.addNumber(42);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	empty.printElements();


    std::cout << "\n\n------ Test 2: No span exceptions ----------" << std::endl;
	Span single(1);
	try {
        single.shortestSpan();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	try {
        single.longestSpan();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }


    std::cout << "\n\n-------- Test 3: Using the addRange function ---------------" << std::endl;
	Span range = Span(5);
    std::vector<int> numbers;
    numbers.push_back(5);
    numbers.push_back(3);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(4);
	range.addNumber(42);
	try {
   		range.addRange(numbers.begin(), numbers.end());
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	range.printElements();
	std::cout << "shortest span:	" << range.shortestSpan() << std::endl;
	std::cout << "longest span:	" << range.longestSpan() << std::endl;

    
    std::cout << "\n\n---- Test 4: Using the fillConsecutiveNumbers function ----" << std::endl;
	Span consecutive(50);
	consecutive.fillConsecutiveNumbers();
	try {
        consecutive.addNumber(42);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	consecutive.printElements();
	std::cout << "shortest span:	" << consecutive.shortestSpan() << std::endl;
	std::cout << "longest span:	" << consecutive.longestSpan() << std::endl;


    std::cout << "\n\n----- Test 5: Using fillRandomNumbers function -------" << std::endl;
	Span random(10);
	random.fillRandomNumbers();
	try {
        random.addNumber(42);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	random.printElements();
	std::cout << "shortest span:	" << random.shortestSpan() << std::endl;
	std::cout << "longest span:	" << random.longestSpan() << std::endl;

    

    std::cout << "\n\n----- Test 6: testing 50000 values Span -------" << std::endl;
	Span bigSpan(50000);
	bigSpan.fillConsecutiveNumbers();
	try {
        bigSpan.addNumber(42);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "shortest span:	" << bigSpan.shortestSpan() << std::endl;
	std::cout << "longest span:	" << bigSpan.longestSpan() << std::endl;


    std::cout << "\n\n----- Test 7: testing deep copy -------" << std::endl;
	Span original(5);
	original.addNumber(1);
	original.addNumber(2);
	original.addNumber(3);

	Span copyConstructor(original);
	Span assignmentOperator = original;

	original.addNumber(4);
	copyConstructor.addNumber(44);
	assignmentOperator.addNumber(444);

	std::cout << "original: ";
	original.printElements();
	std::cout << "copy: ";
	copyConstructor.printElements();
	std::cout << "assignment: ";
	assignmentOperator.printElements();
    
	return 0;
}

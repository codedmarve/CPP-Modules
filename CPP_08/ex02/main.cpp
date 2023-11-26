/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:21:49 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/26 21:01:46 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
        std::cout << "\n========= subject pdf test ==================" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(42);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
        // std::cout << "\n" << s.top() << std::endl;
        // std::cout << mstack.top() << std::endl;


        std::cout << "\n\n========= Test 1: reverse Iterators ==================" << std::endl;
        MutantStack<int>::reverse_iterator rit = mstack.rbegin();
        MutantStack<int>::reverse_iterator rite = mstack.rend();
        while (rit != rite) {
            std::cout << *rit << " ";
            ++rit;
        }
        std::cout << std::endl;

        
        std::cout << "\n\n========= Test 2: testing copy constructor==================" << std::endl;
        MutantStack<int> copyConstructor(mstack);
        it = copyConstructor.begin();
        ite = copyConstructor.end();
        while (it != ite)
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;


        std::cout << "\n\n========= Test 3: testing assignment operator overload ==================" << std::endl;
        MutantStack<int> assigned;
        assigned = mstack;
        it = assigned.begin();
        ite = assigned.end();
        while (it != ite)
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;
    }


    {
        std::cout << "\n\n========= Test 4: testing MutantStack of strings ==================" << std::endl;
        MutantStack<std::string>    mstackString;
        mstackString.push("Marvellous");
        mstackString.push("Tobi");
        mstackString.push("Oduwole");
        MutantStack<std::string>::iterator it = mstackString.begin();
        MutantStack<std::string>::iterator ite = mstackString.end();
        it = mstackString.begin();
        ite = mstackString.end();
        while (it != ite)
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;
    }


    {
        std::cout << "\n\n========= Test 5: testing MutantStack of chars ==================" << std::endl;
        MutantStack<char>    mstackchar;
        for (char i = 'A'; i <= 'Z'; i++)
            mstackchar.push(i);
        MutantStack<char>::iterator it = mstackchar.begin();
        MutantStack<char>::iterator ite = mstackchar.end();

        it = mstackchar.begin();
        ite = mstackchar.end();
        while (it != ite)
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;
    }

    return 0;
}
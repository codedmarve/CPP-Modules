/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:15:48 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/26 18:27:06 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack> // stack
#include <list> // list to compare w. stack
#include <vector>


template <typename T> 
class MutantStack : public std::stack <T> {
public:
    MutantStack() {};
    ~MutantStack() {};
    // MutantStack(const MutantStack &that) : std::stack<T>(that) {};
    
    MutantStack &operator=(const MutantStack &obj) {
        if (this != &obj)
        std::stack<T>::operator=(obj);
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() {return std::stack<T>::c.begin();}
    iterator end()   {return std::stack<T>::c.end();}

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    reverse_iterator rbegin() {return this->c.rbegin();}
    reverse_iterator rend() {return this->c.rend();}
};


#endif
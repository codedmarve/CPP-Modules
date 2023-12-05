/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:52:25 by moduwole          #+#    #+#             */
/*   Updated: 2023/12/05 10:58:17 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <sstream>

class RPN {
public:
    RPN();
    ~RPN();
    RPN(const RPN &that);
    RPN& operator=(const RPN &obj);

    double calculate(std::string input);

    class ErrorException: public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

private:
    std::stack<std::string> _container;

    bool operationToken(char c);
    void proceed();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:16:01 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/04 00:30:20 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  peter("Peter", 160);
    Bureaucrat  braian("Braian", 0);
    peter.incrementGrade();
    braian.decrementGrade();
    std::cout << braian;
    return(0);
}

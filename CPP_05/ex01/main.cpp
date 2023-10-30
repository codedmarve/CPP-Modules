/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:27:23 by moduwole          #+#    #+#             */
/*   Updated: 2023/10/30 01:06:58 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


int main()
{
    Bureaucrat  peter("Marve", 101);
    Form        form("Course", 100, 100);

    /*              test for signing a form without enough grade      */
    peter.signForm(form);
    // /*              test for incrementing the grade                     */
    peter.incrementGrade();
    // /*              test for signing a form with enough grade.          */
    peter.signForm(form);
    // /*              test for << operator for form and bureaucrat       */
    std::cout << form << "\n" << peter;
    // /*              test for copy operator to see its behaviour for the const parts  */
    Form    A;
    A = form;
    std::cout << A; // we see that the only attribute of form which is copied to A, is its boolean for sign.
    // /*              test for grade constraints in form class            */
    Form    B("b", 200, 1);
    Form    C("c", 0, 100);
    Form    D("d", -1, 300);
    std::cout << "\n\n";
    return(0);
}
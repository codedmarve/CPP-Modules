/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:30:34 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/01 02:55:08 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
    /*          test for each form type     initialization  */
    ShrubberyCreationForm formA("home");

    RobotomyRequestForm formB("garage");
    
    PresidentialPardonForm formC("home");

    Bureaucrat  officer("Briaian", 100);
    Bureaucrat  chef("Peter", 1);
    Bureaucrat  middleManager("Stewee", 45);

    /*      signing forms first  one form is signed, and other form cannot be signed by officer */
    officer.signForm(formA); //officer can sign this form
    officer.signForm(formB); //officer cant sign this form

    middleManager.signForm(formB);
    /*      test for executing the forms   */
    officer.executeForm(formA);  //officer can execute the signed form    
    /*      test for when form is not signed, there for cannot be executed. */
    middleManager.executeForm(formB);   //manager cant execute this form because it is not signed.
    /*      test for when level is low, form cannot be executed. */
    middleManager.signForm(formB);    // formB is signed here.
    officer.executeForm(formB);         //officer cannot execute the form because of his low grade.
    /*      test for executing Robotomyform       */
    middleManager.executeForm(formB);   //manager should be able to execute the form.
    /*      test for executing PresidentialPardon form       */   
    chef.signForm(formC);
    chef.executeForm(formC);

    return(0);
}
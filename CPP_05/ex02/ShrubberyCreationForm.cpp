/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:48:27 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/03 16:24:43 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shruberry Form", 145, 137), _target("default target") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Form", 145, 137),
    _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : AForm(obj),
    _target(obj._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << getName() << "Shrubbery Creation Form shredded" << std::endl;
}

ShrubberyCreationForm    & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    this->_target = obj._target;
    setSigned(obj.getSigned());
    return (*this);
}

std::string     ShrubberyCreationForm::getTarget() const
{
    return (_target);
}

void    ShrubberyCreationForm::executeForm(void) const
{
    std::ofstream   o_file((getTarget() + "_shrubbery").c_str());
    o_file  << "                                                  ." << std::endl;
    o_file << "                                              .         ;" << std::endl;
    o_file << "                 .              .              ;%     ;;" << std::endl;
    o_file << "                   ,           ,                :;%  %;" << std::endl;
    o_file << "                    :         ;                   :;%;'     .," << std::endl;
    o_file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
    o_file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    o_file << "              %;       %;%;      ,  ;       %;  ;%;   ,%';" << std::endl;
    o_file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    o_file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    o_file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    o_file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
    o_file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
    o_file << "                        `@%.  `;@%.      ;@@%;" << std::endl;
    o_file << "                          `@%%. `@%%    ;@@%;" << std::endl;
    o_file << "                            ;@%. :@%%  %@@%;" << std::endl;
    o_file << "                              %@bd%%%bd%%:; " << std::endl;
    o_file << "                                #@%%%%%:;;" << std::endl;
    o_file << "                                %@@%%%::;" << std::endl;
    o_file << "                                %@@@%(o);  . '         " << std::endl;
    o_file << "                                %@@@o%;:(.,'         " << std::endl;
    o_file << "                            `.. %@@@o%::;         " << std::endl;
    o_file << "                               `)@@@o%::;         " << std::endl;
    o_file << "                                %@@(o)::;        " << std::endl;
    o_file << "                               .%@@@@%::;         " << std::endl;
    o_file << "                                ;%@@@@%::;.          " << std::endl;
    o_file << "                              ;%@@@@%%:;;;. " << std::endl;
    o_file << "                          ...;%@@@@@%%:;;;;,." << std::endl;
    o_file.close();
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!this->getSigned())
            throw (AForm::FormNotSignedException());
        else if (executor.getGrade() > this->getGradeToExec())
            throw (AForm::GradeTooLowException());
        else
            this->executeForm();
    }
    catch(const std::exception &ex)
    {
        std::cerr << "Exception thrown: " << ex.what() << std::endl;
    }
}

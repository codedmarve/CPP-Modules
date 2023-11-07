/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 02:25:00 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/07 03:02:56 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() 
{
    std::cout << "ScalatConverter constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter() 
{
    std::cout << "ScalatConverter desstructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &that)
{
    *this = that;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &that)
{
    (void)that;
    return *this;
}

void printResult(char charVal, bool validChar, int intVal, float floatVal, double doubleVal) {
    std::cout << "char: ";
    if (validChar)
    {
        if (isprint(charVal))
            std::cout << "'" << charVal << "'\n";
        else
            std::cout << "non displayable\n";

        std::cout << "int: " << intVal << "\n";
        std::cout << "float: " << floatVal << (std::fmod(floatVal, 1.0) == 0.0 ? ".0f" : "f") << "\n";
        std::cout << "double: " << doubleVal << (std::fmod(doubleVal, 1.0) == 0.0 ? ".0" : "") << "\n";
    }
    else
    {
        std::cout << "impossible\nint: impossible\n";
        std::cout << "float: " << floatVal << (std::fmod(floatVal, 1.0) == 0.0 ? ".0f" : "f") << "\n";
        std::cout << "double: " << doubleVal << (std::fmod(doubleVal, 1.0) == 0.0 ? ".0" : "") << "\n";
    }
}

void handleDouble(double doubleVal)
{
    float floatVal = static_cast<float>(doubleVal);
    char charVal = static_cast<char>(doubleVal);
    if (doubleVal > INT_MAX || doubleVal < INT_MIN) {
        int intVal = INT_MIN;
        printResult(charVal, false, intVal, floatVal, doubleVal);
        return;
    }
    int intVal = static_cast<int>(doubleVal);
    printResult(charVal, true, intVal, floatVal, doubleVal);
}

void handleChar(char charVal)
{
    float floatVal = static_cast<float>(charVal);
    double doubleVal = static_cast<double>(charVal);
    int intVal = static_cast<int>(charVal);
    printResult(charVal, true, intVal, floatVal, doubleVal);
}

void handleInfs(std::string str)
{
    float floatVal = static_cast<float>(atof(str.c_str()));
    double doubleVal = static_cast<double>(floatVal);
    int intVal = INT_MIN;
    char charVal = '\0';
    printResult(charVal, false, intVal, floatVal, doubleVal);
}

void handleFloat(float floatVal)
{
    double doubleVal = static_cast<double>(floatVal);
    char charVal = static_cast<char>(floatVal);
    if (floatVal > INT_MAX || floatVal < INT_MIN)
    {
        int intValue = INT_MIN;
        printResult(charVal, false, intValue, floatVal, doubleVal);
        return ;
    }
    int intValue = static_cast<int>(floatVal);
    printResult(charVal, true, intValue, floatVal, doubleVal);
}

void handleInteger(int intValue)
{
    float floatVal = static_cast<float>(intValue);
    double doubleVal = static_cast<double>(intValue);
    char charVal = static_cast<char>(intValue);
    printResult(charVal, true, intValue, floatVal, doubleVal);
}

int	findType(std::string s)
{
    if (s.length() == 1 && !isdigit(s.at(0)))
        return CHAR;
    if (s == "+inff" || s == "+INFF" || s == "-inff" || s == "-INFF" || s == "nan" \
            || s == "NAN" || s == "-inf" || s == "+inf" || s == "nanf")
            return PSEUDO;
    for (size_t i = 0; i < s.length(); i++) 
    {
        if (!(isdigit(s[i]) || s[i] == '.' || s[i] == 'f') || \
            (i != 0 && (s[i] == '+' || s[i] == '-'))) 
                return INVALID;
    }
     if (s.find('.') != std::string::npos)
     {
        if (s.find_first_of('.') != s.find_last_of('.') || s.find_first_of('f') != s.find_last_of('f'))
            return INVALID;
        if (s.find('f') == s.length() - 1)
            return FLOAT;
        if (s.find('f') != std::string::npos)
            return INVALID;
        return DOUBLE;
     }
    if (s.find('f') != std::string::npos)
        return INVALID;
    return INT;
}

void ScalarConverter::convert(std::string const &str)
{
    int type = findType(str);

    long tmp = atol(str.c_str());
	if (tmp > INT_MAX || tmp < INT_MIN)
        type = DOUBLE;

    switch (type) {
        case INT:
            handleInteger(atoi(str.c_str()));
            break;
        case FLOAT:
            handleFloat(atof(str.c_str()));
            break;
        case DOUBLE:
            handleDouble(atof(str.c_str()));
            break;
        case CHAR:
            handleChar(str.at(0));
            break;
        case PSEUDO:
            handleInfs(str);
            break;
        case INVALID:
            std::cerr << "error: invalid string input" << std::endl;
            return;
    }
}

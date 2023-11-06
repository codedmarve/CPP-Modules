/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 02:25:00 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/06 06:49:11 by moduwole         ###   ########.fr       */
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

int	findType(std::string s)
{
    if (s.length() == 1 && !isdigit(s.at(0)))
        return CHAR;
    if (s == "+inff" || s == "+INFF" || s == "-inff" || s == "-INFF" || s == "nan" || s == "NAN")
        return PSEUDO;
    for (size_t i = 0; i < s.length(); i++) 
    {
        if (!(isdigit(s[i]) || s[i] == '.' || s[i] == 'f') || \
            (i != 0 && (s[i] == '+' || s[i] == '-'))) 
                return INVALID;
    }
    if (s.find('.') != std::string::npos)
    {
        if (s.find_first_of('.') != s.find_last_of('.') || s.find_first_of('f') != s.find_last_of('f')
            || s.find('f') != s.length() - 1)
            return INVALID;
        if (s.find('f') != std::string::npos)
            return FLOAT;
        return DOUBLE;
    }
    if (s.find('f') != std::string::npos)
        return INVALID;
    return INT;
}

void printResult(char charVal, bool validChar, int intVal, float floatVal, double doubleVal)
{
    if (isprint(charVal) && validChar)
    {
        std::cout << "char: '" <<  charVal << "'\n";
        std::cout << "int: " << intVal << "\n";
		std::cout << "float: " << floatVal;
		if (std::fmod(floatVal, 1.0) == 0.0)
            std::cout << ".0f\n";
        else
            std::cout << "f\n";
        std::cout << "double: " << doubleVal;
        if (std::fmod(doubleVal, 1.0) == 0.0)
            std::cout << ".0\n";
		else
            std::cout << "\n";
    }
    else if (validChar)
    {
        std::cout << "char: non displayable\n";
        std::cout << "int: " << intVal << "\n";
		std::cout << "float: " << floatVal;
		if (std::fmod(floatVal, 1.0) == 0.0)
            std::cout << ".0f\n";
        else
            std::cout << "f\n";
        std::cout << "double: " << doubleVal;
        if (std::fmod(doubleVal, 1.0) == 0.0)
            std::cout << ".0\n";
        else
            std::cout << "\n";
    }
    else {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
		std::cout << "float: " << floatVal;
		if (std::fmod(floatVal, 1.0) == 0.0)
            std::cout << ".0f\n";
        else
            std::cout << "f\n";
        std::cout << "double: " << doubleVal;
        if (std::fmod(doubleVal, 1.0) == 0.0)
            std::cout << ".0\n";
        else
            std::cout << "\n";
    }
}

// func. to handle integer conversion
void handleInteger(int intValue)  {
    float floatVal = static_cast<float>(intValue);
    double doubleVal = static_cast<double>(intValue);
    char charVal = static_cast<char>(intValue);
    printResult(charVal, true, intValue, floatVal, doubleVal);
}

// func. to handle float conversion
void handleFloat(float floatVal) {
    double doubleVal = static_cast<double>(floatVal);
    char charVal = static_cast<char>(floatVal);
    if (floatVal > INT_MAX || floatVal < INT_MIN) {
        int intValue = INT_MIN;
        printResult(charVal, false, intValue, floatVal, doubleVal);
        return;
    }
    int intValue = static_cast<int>(floatVal);
    printResult(charVal, true, intValue, floatVal, doubleVal);
}

// func to handle  conversion of a double value
void handleDouble(double doubleVal) {
    float floatVal = static_cast<float>(doubleVal);
    char charVal = static_cast<char>(doubleVal);
    if (doubleVal > INT_MAX || doubleVal < INT_MIN) {
        // if double value cannot be converted to an int due to overflow, set intVal to INT_MIN
        int intVal = INT_MIN;
        printResult(charVal, false, intVal, floatVal, doubleVal);
        return;
    }
    int intVal = static_cast<int>(doubleVal);
    printResult(charVal, true, intVal, floatVal, doubleVal);
}

// func to handle conversion of a character
void handleChar(char charVal) {
    float floatVal = static_cast<float>(charVal);
    double doubleVal = static_cast<double>(charVal);
    int intVal = static_cast<int>(charVal);
    printResult(charVal, true, intVal, floatVal, doubleVal);
}

// f. to handle special cases: +inff, -inff, nan, etc.
// where input string represents values like :
// positive infinity, 
// negative infinity,
// "not-a-number" (NaN). 
void handleInfs(std::string str) {
	// converts input string to float using 
	// ATOF function to convert the string to a double and then casting it to a float. 
    float floatVal = static_cast<float>(atof(str.c_str()));
	// further converts floating-point val to double=>preciser & larger than float
    double doubleVal = static_cast<double>(floatVal);
	// Behavior when trying to cast infinity to int:
	// int value set to INT_MIN, bc converting infinity (positive or negative) to an int isn't possible 
	// due to limited range of ints. 
	// By setting it to INT_MIN, it indicates: converting infinity to an int is impossible
    int intVal = INT_MIN;

	// floatVal is cast to a char. 
	// This step is made to attempt conversion, even though its weird in most cases, 
	// as the result might not be possible to display:
    char charVal = static_cast<char>(floatVal);
    printResult(charVal, false, intVal, floatVal, doubleVal);
}

// determine type of input & perform the appropriate conversion
void ScalarConverter::convert(std::string const &str) {
    int type = findType(str);
	// string -> long int
    long tmp = atol(str.c_str()); // PROMOTIONAL CAST

    // protect int from overflow
	// std::numeric_limits<int>::max() is part of the STDLIB: 
	// provides information abt properties of numbers:
	// used to retrieve  max representable value for the int.
	
	if (tmp > INT_MAX || tmp < INT_MIN) {
    //if (tmp > std::numeric_limits<int>::max() || tmp < std::numeric_limits<int>::min()) {
        type = DOUBLE; // FLOAT; - could be also possible, BUT
		// "DOUBLE" represents double-precision floating-point numbers, 
		// which have a wider range and higher precision compared to "FLOAT."
    }

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
            handleChar(str.at(0)); // retrieves the first character in the input string
            break;
        case PSEUDO:
            handleInfs(str);
            break;
        case INVALID:
            std::cerr << "error: invalid string input" << std::endl;
            return;
    }
}
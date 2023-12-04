/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:23:04 by moduwole          #+#    #+#             */
/*   Updated: 2023/12/04 02:01:31 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
# define BTC_HPP

#include <iostream>
#include <string> // .c_str(), std::getline (also in <istream> and <sstream>)
#include <fstream> // std::ifstream class
#include <algorithm> // .find .end .empty
#include <cstdlib> // atof
#include <map> // std::map
#include <sys/stat.h>
#include <cstring>


// #define DATABASE "data.csv"

class BitcoinExchange {
public:
    BitcoinExchange(std::string const database, std::string const inputfile);
    BitcoinExchange(const BitcoinExchange& src); // those can stay in public bc we cannot instantiate the class w/o database anyway
    BitcoinExchange& operator=(const BitcoinExchange& src);
    ~BitcoinExchange(){};

    void showExchange(std::string input_file);

private:
    // std::map where the key is a std::string and the value is a double.
    std::map<std::string, double> _db;
    std::fstream _database;
    std::fstream _inputFile;
    

    BitcoinExchange(); // we should prevent the default constructor from being called

    bool openFile(std::string fileName, std::fstream & fs);

    double findRate(std::string date);
    bool validDataLine(std::string line);
    
    bool checkLineFormat(std::string line);
    bool checkDate(std::string line);
    bool validValue(std::string line);
    bool validYear(int year);
    bool validMonth(int month);
    bool validDay(int day, int month, int year);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:23:04 by moduwole          #+#    #+#             */
/*   Updated: 2023/12/05 03:00:48 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
# define BTC_HPP

#include <iostream>
#include <string> 
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <sys/stat.h>
#include <cstring>

class BitcoinExchange {
public:
    BitcoinExchange(std::string const database, std::string const inputfile);
    BitcoinExchange(const BitcoinExchange& that);
    ~BitcoinExchange();
    BitcoinExchange& operator=(const BitcoinExchange& obj);

private:
    std::map<std::string, double> _container;
    std::fstream _database;
    std::fstream _inputFile;

    bool    openFile(std::string fileName, std::fstream & fs);
    bool    processDatabase();
    void    processInputfile();
    bool    checkDate(std::string date);
    bool    checkValue(std::string line);
    double  findRate(std::string date);

    BitcoinExchange();
};

#endif
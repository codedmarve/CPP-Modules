/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:23:06 by moduwole          #+#    #+#             */
/*   Updated: 2023/12/04 02:01:03 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(std::string const database, std::string const inputFile)
{
    if (!openFile(database, _database) || !openFile(inputFile, _inputFile))
        return ;

    std::cout << "success hahahaha\n";

}

bool    BitcoinExchange::openFile(std::string fileName, std::fstream & fs)
{
	struct stat filecheck;
      
    if ( stat( fileName.c_str(), &filecheck ) != 0 )
        return (std::cerr << "Error: " <<  fileName + ": invalid file\n",  false);
    if ( ( filecheck.st_mode & S_IFREG ) == 0 )
        return (std::cerr << "Error: " <<  fileName + ": is a directory\n",  false);
    if ( ( filecheck.st_mode & S_IXUSR ) != 0 )
        return (std::cerr << "Error: " <<  fileName + ": is an excutable\n",  false);
    fs.open(fileName);
    if (!fs.is_open())
    {
        if (!fileName.compare(fileName.length() - 4, 4, ".csv"))
            std::cerr << "Error: could not open database\n";
        else
            std::cerr << "Error: " <<  fileName + ": could not open input file\n";
        return (false);
    }
    return true;
}

// bool	BitcoinExchange::checkLineFormat(std::string line)
// {
// 	if (line.length() < 12 || line.find(',') != 10)
// 		return (false);
//     double value = atof(line.substr(11).c_str());
//     if (!value && line.substr(11) != "0")
//         return (false);
//     _db[line.substr(0, 10)] = value;
//     return true;
// }


// bool	BitcoinExchange::checkDate(std::string line)
// {
// 	if (line.at(4) != '-' || line.at(7) != '-')
// 		return false;

	
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileData.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:57:03 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/03 20:57:03 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileData.hpp"

FileData::FileData (std::string fileName) : _fileName(fileName) {}

FileData::~FileData () {}

std::string	FileData::getName(void) const{

	return this->_fileName;
}

void	FileData::_replaceLoop(std::ifstream &inFile, std::ofstream &outFile,
	std::string s1, std::string s2) {

	std::string line;
	while (std::getline(inFile, line))
	{
		for (size_t pos = line.find(s1); pos != std::string::npos; pos = line.find(s1))
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
}

void	FileData::replace(std::string s1, std::string s2) {

	std::ifstream	inFile(this->getName().c_str());
	if (!inFile.is_open())
	{
		std::cout << "could now open file: " << this->getName() << std::endl;
		return ;
	}
	if (inFile.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "File is empty" << std::endl;
		return ;
	}
	std::ofstream outFile((this->getName() + ".replace").c_str());
	if (!outFile.is_open())
	{
		std::cout << "Could not open he file: " << this->getName() << ".replace" << std::endl;
		inFile.close();
		return ;
	}
	_replaceLoop(inFile, outFile, s1, s2);
	inFile.close();
	outFile.close();
}
/*
 * FileBuilder.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */

#include <iostream>
#include <fstream>
#include "BasicFileReader.h"

BasicFileReader::BasicFileReader()
{

}
void BasicFileReader::readFile(const std::string& fileName)
{
	std::cout << "Reading " + fileName << "!" << std::endl;
	std::fstream file;
	file.open(fileName);
	if(file.fail())
	{
		std::cout << "Could not successfully open the file. :(" << std::endl;
	}
	else
	{
		 if (file.is_open())
		 {
			 std::string temp;
			 while (!file.eof())
			 {
				getline(file, temp);
				m_fileContents.append(temp).append("\n");

			 }
		 }
		file.close();
	}
	std::cout << "Done reading " + fileName << "!" << std::endl;

}



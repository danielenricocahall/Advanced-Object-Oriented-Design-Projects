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
std::cout << "Reading " + fileName + " now!" << std::endl;

std::fstream file;
file.open(fileName);

if(file.fail())
{
	std::cout << "Could not successfully open the file. :(" << std::endl;
}
else
{
 if (file.is_open()) {
	 while (!file.eof())
	 {

		getline(file, fileContents);
		std::cout<<fileContents;

	 }
 }
file.close();
}
}



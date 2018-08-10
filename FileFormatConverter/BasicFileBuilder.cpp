/*
 * BasicFileBuilder.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */
#include "BasicFileBuilder.h"
#include <iostream>
#include <fstream>
#include <regex>

BasicFileBuilder::BasicFileBuilder()
{
}


void BasicFileBuilder::buildString(const std::string &originalFileContents)
{
	std::cout << "Updating the contents of the string now..." << std::endl;

	m_updatedFileContents = originalFileContents;
	for(std::map<std::string,std::string>::iterator it = m_tokens.begin(); it != m_tokens.end(); ++it)
	{
		std::cout << "Replacing " << it->first << " with " << it->second << std::endl;

		m_updatedFileContents = std::regex_replace(m_updatedFileContents, std::regex(it->first), it->second);
	}
	std::cout << "Done!" << std::endl;

}

FileBuilder* BasicFileBuilder::clone()
{
	return new BasicFileBuilder(*this);
}



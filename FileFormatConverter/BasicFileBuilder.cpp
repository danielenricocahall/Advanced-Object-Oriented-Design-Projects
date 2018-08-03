/*
 * BasicFileBuilder.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */
#include "BasicFileBuilder.h"
#include <iostream>
#include <fstream>
BasicFileBuilder::BasicFileBuilder()
{
}


void BasicFileBuilder::buildString(const std::string &originalFileContents)
{
	m_updatedFileContents = originalFileContents;
	for(std::map<char,char>::iterator it = m_tokens.begin(); it != m_tokens.end(); ++it)
	{
		std::replace( m_updatedFileContents.begin(), m_updatedFileContents.end(), it->first, it->second);
	}
}

FileBuilder* BasicFileBuilder::clone()
{
	return new BasicFileBuilder(*this);
}



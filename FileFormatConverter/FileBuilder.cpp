/*
 * FileBuilder.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */
#include "FileBuilder.h"
#include <iostream>

FileBuilder::FileBuilder()
{

}

FileBuilder::~FileBuilder()
{

}

FileBuilder::FileBuilder(const FileBuilder& copy)
{
	this->m_tokens = copy.m_tokens;
	this->m_updatedFileContents = copy.m_updatedFileContents;
}


void FileBuilder::addTokenPair(std::pair<char, char> token)
{

	m_tokens.insert(token);
}

std::map<char, char> FileBuilder::getTokens() const
{
	return m_tokens;
}

std::string FileBuilder::getUpdatedFileContents() const
{
	return m_updatedFileContents;
}

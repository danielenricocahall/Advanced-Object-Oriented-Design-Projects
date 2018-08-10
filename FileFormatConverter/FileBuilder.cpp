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


void FileBuilder::addTokenPair(std::pair<std::string, std::string> token)
{

	m_tokens.insert(token);
}

std::map<std::string, std::string> FileBuilder::getTokens() const
{
	return m_tokens;
}

std::string FileBuilder::getUpdatedFileContents() const
{
	return m_updatedFileContents;
}

void FileBuilder::clearTokens()
{
	m_tokens.clear();
}

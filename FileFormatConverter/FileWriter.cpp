/*
 * FileWriter.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */

#include "FileWriter.h"
#include <iostream>
#include <fstream>
FileWriter::FileWriter()
{
	m_convertedFileName = "";
}

FileWriter::~FileWriter()
{
	clear();
}

void FileWriter::setFileToWriteTo(const std::string& originalFileName)
{
	if(m_convertedFileName.empty())
	{
		size_t lastIndex = originalFileName.find_last_of(".");
		this->m_convertedFileName =
				originalFileName.substr(0, lastIndex) +
				"_updated" +
				originalFileName.substr(lastIndex);
	}
}


void FileWriter::clear()
{
	m_convertedFileName = "";
}
std::string FileWriter::convertAndWriteFile(FileBuilder * builder, const std::string& originalFileContents)
{
	builder->buildString(originalFileContents);
	std::ofstream myfile (m_convertedFileName);
	if (myfile.is_open())
	{
	  myfile << builder->getUpdatedFileContents();
	  myfile.close();
	}
	return builder->getUpdatedFileContents();
}

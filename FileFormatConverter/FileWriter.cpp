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

}

void FileWriter::setFileToWriteTo(const std::string& convertedFileName)
{
	this->m_convertedFileName = convertedFileName;
}



std::string FileWriter::convertAndWriteFile(FileBuilder * builder, const std::string& originalFileContents)
{
	builder->buildString(originalFileContents);
	m_convertedFileName = "foo.txt";
	/*if(m_convertedFileName.empty())
	{
		size_t lastIndex = originalFileName.find_last_of(".");
		setFileToWriteTo(originalFileName.substr(0, lastIndex) +
				"_updated" +
				originalFileName.substr(lastIndex));
	}*/
	std::ofstream myfile (m_convertedFileName);
	  if (myfile.is_open())
	  {
	    myfile << builder->getUpdatedFileContents();
	    myfile.close();
	  }
	return builder->getUpdatedFileContents();
}

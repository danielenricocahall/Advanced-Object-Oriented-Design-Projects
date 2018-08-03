/*
 * FileBuilder.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */

#pragma once
#include <string>
#include "FileBuilder.h"


class FileWriter
{
public:
	FileWriter();
	virtual ~FileWriter();
	void setFileToWriteTo(const std::string& updatedFileName);

	std::string convertAndWriteFile(FileBuilder * builder, const std::string& originalFileContents);

private:
	std::string m_convertedFileName;
};

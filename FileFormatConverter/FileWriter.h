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

	std::string convertAndWriteFile(const FileBuilder& builder) const;
};

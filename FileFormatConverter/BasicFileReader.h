/*
 * FileBuilder.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */

#pragma once
#include "FileReader.h"


// A majority of files are going to be read the same way
// this class encompasses that majority

class BasicFileReader : public FileReader
{
public:
	BasicFileReader();
	virtual void readFile(const std::string& FileName);

private:




};

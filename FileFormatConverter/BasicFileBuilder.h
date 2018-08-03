/*
 * BasicFileBuilder.h
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */

#pragma once
#include "FileBuilder.h"

class BasicFileBuilder : public FileBuilder
{
public:

	BasicFileBuilder();
    virtual void buildString(const std::string &originalFileContents);
    virtual FileBuilder* clone();
};






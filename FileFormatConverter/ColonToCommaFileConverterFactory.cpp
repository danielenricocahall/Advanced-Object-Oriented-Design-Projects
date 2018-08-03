/*
 * FileBuilder.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */

#include "ColonToCommaFileConverterFactory.h"


ColonToCommaFileConverterFactory::ColonToCommaFileConverterFactory()
{
    
}


ColonToCommaFileConverterFactory::~ColonToCommaFileConverterFactory()
{

}

FileReader* ColonToCommaFileConverterFactory::createFileReader() const
{

	return new BasicFileReader();

}
FileBuilder* ColonToCommaFileConverterFactory::createFileBuilder() const
{
	return nullptr;
}



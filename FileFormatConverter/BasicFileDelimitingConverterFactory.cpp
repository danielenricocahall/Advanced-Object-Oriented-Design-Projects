/*
 * FileBuilder.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */

#include "BasicFileDelimitingConverterFactory.h"

BasicFileDelimitingConverterFactory::BasicFileDelimitingConverterFactory()
{
    
}


BasicFileDelimitingConverterFactory::~BasicFileDelimitingConverterFactory()
{

}

FileReader* BasicFileDelimitingConverterFactory::createFileReader() const
{

	return new BasicFileReader();

}
FileBuilder* BasicFileDelimitingConverterFactory::createFileBuilder() const
{
	return new BasicFileBuilder();
}



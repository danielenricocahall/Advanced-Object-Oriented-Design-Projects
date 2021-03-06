#pragma once
#include "BasicFileReader.h"
#include "BasicFileBuilder.h"

#include "FileConverterFactory.h"


class BasicFileDelimitingConverterFactory
{
public:

// Note: lazy initialization
static BasicFileDelimitingConverterFactory& getInstance()
{
	static BasicFileDelimitingConverterFactory instance;
	return instance;
}

virtual FileReader* createFileReader() const;
virtual FileBuilder* createFileBuilder() const;

private:

	BasicFileDelimitingConverterFactory();
	~BasicFileDelimitingConverterFactory();
};

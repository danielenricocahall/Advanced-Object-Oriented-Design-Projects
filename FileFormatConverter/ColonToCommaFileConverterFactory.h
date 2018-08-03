#pragma once
#include "BasicFileReader.h"
#include "FileConverterFactory.h"


class ColonToCommaFileConverterFactory
{
public:

static ColonToCommaFileConverterFactory& getInstance()
{
	static ColonToCommaFileConverterFactory instance;
	return instance;
}

virtual FileReader* createFileReader() const;
virtual FileBuilder* createFileBuilder() const;

private:

	ColonToCommaFileConverterFactory();
	~ColonToCommaFileConverterFactory();
};

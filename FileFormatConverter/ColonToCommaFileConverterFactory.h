#pragma once
#include "FileConverterFactory.h"
#include "ColonFileReader.h"


class ColonToCommaFileConverterFactory
{
public:

static ColonToCommaFileConverterFactory& getInstance()
{

static ColonToCommaFileConverterFactory instance;
return instance;
}

virtual FileReader* createFileReader();
virtual FileBuilder* createFileBuilder();

private:

ColonToCommaFileConverterFactory();
~ColonToCommaFileConverterFactory();
};

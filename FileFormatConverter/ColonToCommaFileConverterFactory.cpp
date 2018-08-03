#include "ColonToCommaFileConverterFactory.h"


ColonToCommaFileConverterFactory::ColonToCommaFileConverterFactory()
{
    
}


ColonToCommaFileConverterFactory::~ColonToCommaFileConverterFactory()
{

}

FileReader* ColonToCommaFileConverterFactory::createFileReader()
{

	return new ColonFileReader();

}
FileBuilder* ColonToCommaFileConverterFactory::createFileBuilder()
{
	return nullptr;
}



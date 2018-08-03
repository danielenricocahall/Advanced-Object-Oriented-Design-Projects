#include "ColonToCommaFileConverterFactory.h"



int main()
{

    FileReader * fileReader =  ColonToCommaFileConverterFactory::getInstance().createFileReader();
    //FileBuilder * fileBuilder = ColonToCommaFileConverterFactory::getInstance().createFileBuilder();

    fileReader->readFile("testing.txt");

    return 0;

}



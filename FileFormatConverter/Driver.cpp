#include "ColonToCommaFileConverterFactory.h"



int main()
{

    FileReader * fileReader =  ColonToCommaFileConverterFactory::getInstance().createFileReader();

    fileReader->readFile("testing.txt");

    return 0;

}



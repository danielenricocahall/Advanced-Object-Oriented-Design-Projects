#include "ColonToCommaFileConverterFactory.h"
#include "FileWriter.h"

#include <iostream>
int main()
{

    FileReader * fileReader =  ColonToCommaFileConverterFactory::getInstance().createFileReader();
    FileBuilder * fileBuilder = ColonToCommaFileConverterFactory::getInstance().createFileBuilder();
    fileBuilder->addTokenPair(std::pair<char, char>(',' , ':'));

    FileWriter * fileWriter = new FileWriter();

    std::string file_name = "testing.txt";
    fileReader->readFile(file_name);

    fileWriter->convertAndWriteFile(fileBuilder, fileReader->getFileContents());


    return 0;

}



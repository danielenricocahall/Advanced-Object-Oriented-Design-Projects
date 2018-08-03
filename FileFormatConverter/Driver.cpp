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


    fileWriter->setFileToWriteTo(file_name);
    fileWriter->convertAndWriteFile(fileBuilder, fileReader->getFileContents());



    FileBuilder * fileBuilder2 = fileBuilder->clone();
    fileBuilder2->clearTokens();
    fileBuilder2->addTokenPair(std::pair<char,char>(',', '-'));

    std::string file_name2 = "testing_2.txt";
    fileWriter->clear();
    fileWriter->setFileToWriteTo(file_name2);
    fileWriter->convertAndWriteFile(fileBuilder2, fileReader->getFileContents());



    return 0;

}



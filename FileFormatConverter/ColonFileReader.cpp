#include "ColonFileReader.h"
#include <iostream>
#include <fstream>

ColonFileReader::ColonFileReader()
{

}
void ColonFileReader::readFile(const std::string& fileName)
{
std::cout << "Reading file now!" << std::endl;
std::fstream myReadFile;
 myReadFile.open(fileName);
 if (myReadFile.is_open()) {
 while (!myReadFile.eof()) {

    getline(myReadFile, fileContents);
    std::cout<<fileContents;


 }
}
myReadFile.close();
}



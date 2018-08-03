#pragma once
#include <string>

class FileReader
{
public:

	virtual void readFile(const std::string& fileName) = 0;
	std::string getFileContents() const;
	virtual ~FileReader();



protected:

// fields

	std::string fileContents;


};

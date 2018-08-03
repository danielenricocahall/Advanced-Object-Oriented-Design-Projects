#include <deque>
#include "FileReader.h"
#include "FileBuilder.h"



class FileConverterFactory
{

public:
    virtual FileReader* createFileReader() = 0;
    virtual FileBuilder* createFileBuilder() = 0;
    virtual ~FileConverterFactory();

protected:

};

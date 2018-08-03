#include <deque>
#include "FileReader.h"
#include "FileBuilder.h"



class FileConverterFactory
{

public:

	// Note: didn't used shared ptrs, because I like to live dangerously.
    virtual FileReader* createFileReader() const = 0;
    virtual FileBuilder* createFileBuilder() const = 0;
    virtual ~FileConverterFactory();

protected:

};

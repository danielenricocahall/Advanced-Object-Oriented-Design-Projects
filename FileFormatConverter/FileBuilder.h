#include <string>


class FileBuilder
{

public:

    virtual void buildString(std::string &originalFileContents);
    virtual ~FileBuilder();


};

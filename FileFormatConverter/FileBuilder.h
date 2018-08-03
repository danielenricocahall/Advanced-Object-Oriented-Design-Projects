/*
 * FileBuilder.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */

#include <string>
#include <deque>

class FileBuilder
{

public:

    virtual void buildString(const std::string &originalFileContents) const = 0;
    virtual ~FileBuilder();
    virtual FileBuilder* clone() const = 0;

protected:
    std::deque<char> tokens;



};

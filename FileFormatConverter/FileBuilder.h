/*
 * FileBuilder.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: daniel
 */
#pragma once
#include <string>
#include <deque>
#include <map>
#include <algorithm>

class FileBuilder
{

public:
	FileBuilder();
    virtual ~FileBuilder();
	FileBuilder( const FileBuilder& copy );
    virtual void buildString(const std::string &originalFileContents) = 0;
    virtual FileBuilder* clone() = 0;
    std::map<std::string, std::string> getTokens() const;
    std::string getUpdatedFileContents() const;
    void addTokenPair( std::pair<std::string, std::string> token);
    void clearTokens();

protected:
    std::map<std::string, std::string> m_tokens;
    std::string m_updatedFileContents;



};

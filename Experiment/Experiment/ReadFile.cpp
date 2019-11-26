#include "pch.h"
#include "ReadFile.h"


ReadFile::ReadFile()
{
	// opening a file 
	readSourceCode.open("./SourceCode.txt");
}

void ReadFile::setTokenString()
{
	std::string tokenString;
	if (readSourceCode.is_open()) {
		while (!readSourceCode.eof()) {
			readSourceCode >> tokenString;
			output = output + tokenString;
		}
	}

	// close a file
	readSourceCode.close();
}

std::string ReadFile::GetOutputString()
{
	return output;
}

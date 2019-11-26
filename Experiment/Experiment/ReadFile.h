#pragma once
#include<string>
#include<fstream>

class ReadFile
{
private:
	std::string output = "";
	std::ifstream readSourceCode;
public:
	ReadFile();
	void setTokenString();
	std::string GetOutputString();
};


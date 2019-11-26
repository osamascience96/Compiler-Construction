#pragma once
#include"List.h"

class Symbol_Table
{
private:
	std::string constraint_type;
	std::string identifier;
	std::string constraint_sign;
	List *defaultTokenList;
	List *newTokenList;
public:
	Symbol_Table();
	void loadDefaultTokens();
	void insertNewToken(std::string constraint_type, std::string identfier, std::string constraint_sign);
};


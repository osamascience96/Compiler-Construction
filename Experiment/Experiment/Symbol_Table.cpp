#include "pch.h"
#include "Symbol_Table.h"


Symbol_Table::Symbol_Table()
{
	defaultTokenList = new List();
	newTokenList = new List();
}

void Symbol_Table::loadDefaultTokens() {
	// loading the default tokens
	defaultTokenList->Insert("int");
	defaultTokenList->Insert("float");
	defaultTokenList->Insert("double");
	defaultTokenList->Insert("char");
	defaultTokenList->Insert("string");
	defaultTokenList->Insert("main");
	defaultTokenList->Insert("(");
	defaultTokenList->Insert(")");
	defaultTokenList->Insert("{");
	defaultTokenList->Insert("}");
	defaultTokenList->Insert(";");
	defaultTokenList->Insert("=");
	defaultTokenList->Insert("+");
	defaultTokenList->Insert("::");
	defaultTokenList->Insert("std");
	defaultTokenList->Insert("cout");
	defaultTokenList->Insert("endl");
	defaultTokenList->Insert("/\n/");
	defaultTokenList->Insert("<<");
	defaultTokenList->Insert("\"");
}

void Symbol_Table::insertNewToken(std::string constraint_type, std::string identfier, std::string constraint_sign) {
	// load the new token inserting 
	newTokenList->Insert(constraint_type);
	newTokenList->Insert(identfier);
	newTokenList->Insert(constraint_sign);
}

#pragma once
#include"Node.cpp"

class List
{
private:
	Node *startNode;
public:
	List();
	void Insert(std::string token);
	Node *GetList();
};


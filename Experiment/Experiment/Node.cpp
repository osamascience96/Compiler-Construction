#include "pch.h"
#include<string>

struct Node {
	std::string data;
	Node *nextNode;

	Node() {
		data = "";
		nextNode = nullptr;
	}
};
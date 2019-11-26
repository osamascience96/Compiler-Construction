#include "pch.h"
#include "List.h"


List::List()
{
}

void List::Insert(std::string token)
{
	if (startNode == nullptr) {
		startNode = new Node();
		startNode->data = token;
	}
	else {
		Node *newNode = startNode;

		while (newNode->nextNode != nullptr) {
			newNode = newNode->nextNode;
		}

		Node *tempPtr = new Node();
		tempPtr->data = token;
		newNode->nextNode = tempPtr;
	}
}

Node * List::GetList()
{
	return startNode;
}


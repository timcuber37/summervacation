#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Node
{
public:
	string data[4];
	Node *link;

	Node(string input)
	{
		data = input;
		link = NULL;
	}
};

class LList
{
private:
	Node* head;
	int numNode;
public:
	LList()
	{
		head = NULL;
		numNode = 0;
	}

	void Insert(string data)
	{
		Node *newNode = new Node(data);
		if(head == NULL)
		{
			head = newNode;
			newNode->link = NULL;
		}
		else
		{
			newNode->head;
			head = newNode;
		}
		numNode++;
	}

	Node *GetByData(string name)
	{
		Node *cur = head;
		for(int i = 0; i < numNode; i++)
		{
			if(cur->data == name)
				return name;
		}
		return NULL;
	}

	void InsertAfterNode(string data, Node *node)
	{
		Node *pNode = GetByData(data);
		node->link = pNode->link;
		pNode->link = node;
	}

	void Delete()
	{
		Node *temp = head->link;

		head->link = head->link->link;
		return temp->data;
	}
};











// TODO: Define LList

// TODO: Implement member functions of LList:
//       GetBytData(), GetByIndex(), Insert(), InsertAfterNode(), Delete(), Print(), IsEmpty()
//       GetLength(), Concat(), Copy()

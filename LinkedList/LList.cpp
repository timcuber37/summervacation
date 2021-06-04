#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Node
{
public:
	string data;
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

	void Insert(string &data)
	{
		Node *newNode = new Node(data);
		if(head == NULL)
		{
			head = newNode;
			newNode->link = NULL;
		}
		else
		{
			newNode->link = head;
			head = newNode;
		}
		numNode++;
	}

	Node *GetByData(string &name)
	{
		Node *cur = head;
		for(int i = 0; i < numNode; i++)
		{
			if(cur->data == name)
				return cur;
			cur = cur->link;
		}
		return NULL;
	}

	Node *GetByIndex(int x)
	{
		Node *cur = head;
		for(int i = 0; i < x; i++)
		{
			if(i == x)
			{
				return cur;
			}
			cur = cur->link;
		}
		return NULL;
	}

	void InsertAfterNode(string &data, Node *node)
	{
		Node *pNode = GetByData(data);
		node->link = pNode->link;
		pNode->link = node;
	}

	void Delete()
	{
		Node *temp = head->link;

		head->link = head->link->link;
	}

	void Print()
	{
		Node* temp = head;
		while(temp != NULL)
		{
			std::cout << temp->data << std::endl;
			temp = temp->link;
		}
	}

	void Invert()
	{
		Node* temp = head;
		Node* prev = NULL;
		Node* next = NULL;

		while(temp != NULL)
		{
			next = temp->link;
			temp->link = prev;
			prev = temp;
			temp = next;
		}
		head = prev;
	}

	void Concat(LList &list)
	{
		Node *temp = head;
		while(temp->next != NULL)
		{
			
		}
	}
};











// TODO: Define LList

// TODO: Implement member functions of LList:
//       GetBytData(), GetByIndex(), Insert(), InsertAfterNode(), Delete(), Print(), IsEmpty()
//       GetLength(), Concat(), Copy()

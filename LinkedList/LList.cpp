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
			newNode->link = head;
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

	bool IsEmpty()
	{
		if(head->link == NULL && data == "")
		{
			return true;
		}
		return false;
	}

	int GetLength()
	{
		return numNode;
	}

	void InsertAfterNode(string data, Node *node)
	{
		Node *pNode = new Node(data);
		pNode->link = node->link;
		node->link = pNode;
	}

	Node *Delete()
	{
		Node *temp = head->link;
		head->link = head->link->link;
		return head;
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

	void Copy(LList *l)
	{
		Node *temp = l->link;
		while(temp->link != NULL)
		{
			temp->data = l->data;
			temp = temp->link;
			l = l->link;
		}
	}

	void Concat(LList list)
	{
		Node *temp = head;
		Node *temp2 = list->link;
		while(temp->link != NULL)
		{
			temp = temp->next;
		}
		temp->next = *temp2;
	}
	
};











// TODO: Define LList

// TODO: Implement member functions of LList:
//       GetBytData(), GetByIndex(), Insert(), InsertAfterNode(), Delete(), Print(), IsEmpty()
//       GetLength(), Concat(), Copy()

#include <iostream>
#include <string>


using namespace std;


class Queue
{
private:
	int *data;
	int maxSize;
	int head;
	int tail;
public:
	Queue(int sizeQueue)
	{
		data = new int[maxSize];
		maxSize = sizeQueue;
		head = -1;
	}

	bool isEmpty()
	{
		if(head == -1)
		{
			return true;
		}
		return false;
	}

	void Insert(int t)
	{
		if((head == 0 && tail == maxSize-1) || (tail + 1 == head))
		{
			cout << "Queue is full" << endl;
		}
		else
		{
			data[nextIndex(tail)] = t;
		}
	}

	int Delete()
	{
		if(!isEmpty())
		{
			temp = head;
			data[temp] = 0;
			head++;
		}
		else
		{
			cout << "Queue is empty. " << endl;
			return -1;
		}
	}

	int nextIndex(int n)
	{
		if(n == maxSize-1)
		{
			return 0;
		}
		else
			return n+1;
	}

	void Print()
	{
		for(int i = 0; i < num; i++)
		{
			cout << data[i] << " "; 
		}
		cout << endl;
	}
};
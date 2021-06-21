#include <iostream>
#include <string>
#include <cstring>

using namespace std;


class Stack
{
private:
	int *data;
	int size;
	int num;
public:
	Stack(int sizeStack)
	{
		data = new int[size];
		size = sizeStack;
		num = 0;
	}

	bool IsEmpty()
	{
		return (num == 0);
	}

	void Insert(int input)
	{
		if(num != size)
		{
			data[num++] = input;
		}
		else
		{
			cout << "Stack is full " << endl;
		}
	}
/*
	int Delete()
	{
		int temp;
		if(IsEmpty())
		{
			cout << "Stack is empty" << endl;
			return -1;
		}
		else
		{
			temp = data[num-1];
			data[num-1] = 0;
			num--;
		}

		return temp;
	}
*/
	void Print()
	{
		for(int i = 0; i < num; i++)
		{
			cout << data[i] << " "; 
		}
		cout << endl;
	}
};

int main()
{
	Stack s1(10);
	s1.Insert(1);
	s1.Insert(2);
	s1.Insert(3);
	s1.Insert(4);
	s1.Insert(5);
	s1.Insert(6);
	s1.Insert(7);
	s1.Print();
}
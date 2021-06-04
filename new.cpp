#include <iostream>
#include <string>

using namespace std;

class over
{
public:
	over();

	void print() 
	{
		cout << "a";
	}

	void print(int a)
	{
		cout << "b";
	}
};



int main()
{
	int x = 0;
	over o;
	o.print(x);

}


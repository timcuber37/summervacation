#include <iostream>
#define MACRO(x) x*x + x - (x/2)

using namespace std;


int main()
{
	float n = 7;
	cout << MACRO(n) << endl;
}
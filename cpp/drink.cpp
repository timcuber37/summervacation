#include <iostream>
#include <string>

using namespace std;


class Expresso
{
private:
	string coffeeBean;
	int roastingTime;
	float bitterness;
public:
	Expresso() 
	{
		coffeeBean = ""; roastingTime = 0; bitterness = 0.0;
	}

	Expresso(string c, int r) 
	{
		coffeeBean = c; roastingTime = r; bitterness = roastingTime * 0.2;
	}

	void setCoffeeBean(string c)
	{
		coffeeBean = c;
	}

	void setRoastingTime(int t)
	{
		roastingTime = t;
	}

	string getCoffeeBean()
	{
		return coffeeBean;
	}

	virtual void printName() = 0;
	

};

class Americano : public Expresso
{
private:
	int water;
public:
	Americano(int w, string c, int r) : Expresso(c, r) 
	{
		water = w; 
	}

	void printName()
	{
		cout << "This is Americano. " << endl;
		cout << getCoffeeBean() << endl;
	}

	int getWater()
	{
		return water;
	}
};


int main()
{
	//Expresso *x = new Expresso("Columbia", 1);
	//x->printName();

	Expresso *m = new Americano(3, "America", 1);
	m->printName();	

	//delete x;
	delete m;
}

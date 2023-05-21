#include <iostream>
using namespace std;
class Vehicle
{
public:
	virtual void Wheels()
	{
		cout << "unknown" << endl;
	}

};
class Car :public Vehicle
{
public:
	void Wheels()
	{
		cout << "Car has 4 wheels" << endl;
	}
};
class Bicycle :public Vehicle
{
public:
	void Wheels()
	{
		cout << "Bicycle has 2 wheels" << endl;
	}
};
int main()
{
	Bicycle b;
	b.Wheels();
	Car c;
	c.Wheels();
	return 0;
}
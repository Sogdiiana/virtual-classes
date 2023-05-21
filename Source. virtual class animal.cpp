#include <iostream>
using namespace std;
class Animal
{
public:
	virtual void Sound()
	{
		cout << "unknown" << endl ;
	}
};
class Dog :public Animal
{
public:
	void Sound()
	{
		cout << "woow-woow" << endl;
	}
};
class Cat :public Animal
{
public:
	void Sound()
	{
		cout << "meow-meow" << endl;
	}
};
int main()
{
	Cat c;
	cout << "Cat says ~ ";
	c.Sound();
	Dog d;
	cout << "Dog says ~ ";
	d.Sound();

	return 0;
}
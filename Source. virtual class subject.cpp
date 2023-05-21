#include <iostream>
using namespace std;
class Subject
{
public:
	Subject()
	{
		cout << " ";
	}
	virtual void LessonsPerWeek()
	{
		cout << "0";
	}
	virtual void NumbersOfPreference() = 0;
};
class Math : public Subject
{
public:
	void LessonsPerWeek()
	{
		cout << "Math is taught 4 times a week " << endl;
	}
	void NumbersOfPreference()
	{
		cout << "30% of students prefer studying this subject " << endl;
	}
};
class English : public Subject
{
public:
	void LessonsPerWeek()
	{
		cout << "English is taught 3 times a week " << endl;
	}
	void NumbersOfPreference()
	{
		cout << "60% of students prefer studying this subject " << endl;
	}
};
class History : public Subject
{
public:
	void LessonsPerWeek()
	{
		cout << "History is taught 2 times a week " << endl;
	}
	void NumbersOfPreference()
	{
		cout << "10% of students prefer studying this subject " << endl;
	}
};
int main()
{
	History h;
	h.LessonsPerWeek();
	h.NumbersOfPreference();
	English e;
	e.LessonsPerWeek();
	e.NumbersOfPreference();
	Math m;
	m.LessonsPerWeek();
	m.NumbersOfPreference();
	return 0;
}
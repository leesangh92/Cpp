#include <iostream>
using namespace std;

template <class T1, class T2>
class Point
{
private:
	T1 x;
	T2 y;

public:
	Point(int a = 0, int b = 0)
	{}

	void set(T1 _a, T2 _b)
	{
		x = _a;
		y = _b;
	}

	void get(T1& _a, T2& _b)
	{
		_a = x;
		_b = y;
	}
};

int main()
{
	int a;
	double b;

	Point <int, double>p1;
	p1.set(10, 123.45);
	p1.get(a, b);
	cout << "a : " << a << ", b : " << b << endl;

	char ch;
	float fnum;
	Point <char, float>p2;
	p2.set('A', 3.14159);
	p2.get(ch, fnum);
	cout << "ch : " << ch << ", fnum : " << fnum << endl;

	return 0;
}
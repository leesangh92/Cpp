#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;

public:
	Circle()
	{}

	Circle(int r)
	{
		radius = r;
	}

	int getRadius()
	{
		return radius;
	}
};

template <typename T>
void mySwap(T &x, T &y)
{
	T tmp; // 빈 괄호 생성자가 필요함.

	tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int a = 10 , b = 20;

	mySwap(a, b);
	cout << "a : " << a << ", b : " << b << endl;

	double d1 = 1.5, d2 = 5.9;

	mySwap(d1, d2);
	cout << "d1 : " << d1 << ", d2 : " << d2 << endl;


	Circle donut(30), pizza(50);

	mySwap(donut, pizza);

	cout << "donut.getRadius() : " << donut.getRadius() << endl;
	cout << "pizza.getRadius() : " << pizza.getRadius() << endl;

	return 0;
}
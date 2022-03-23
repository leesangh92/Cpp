#include <vld.h>

#include <iostream>

using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle()
	{
		cout << "Circle()" << endl;
		radius = 0;
	}

	~Circle() // �Ҹ���, ��ü �Ҹ� �� ����, �ڿ��� �ݳ��ϱ� ���� ���� // overloading �ȵ�, 
	{
		cout << "~Circle() : " << radius << endl;
	}

	Circle(int r)
	{
		cout << "Circle(int r)" << endl;
		radius = r;
	}

	int getRadius() { return radius; }

	double getArea();
};

double Circle::getArea()
{
	return radius * radius * 3.14;
}

int main()
{
	Circle donut;
	Circle pizza(30);

	return 0;
}
#include <iostream>

using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle()
	{
		radius = 1;
	}

	Circle(int r)
	{
		radius = r;
	}
	
	~Circle()
	{
		cout << "~Circle()" << endl;
	}

	int getRadius()
	{
		return radius;
	}

	double getArea()
	{
		return radius * radius * 3.14;
	}
};

int main()
{
	Circle donut;
	Circle pizza(30);

	Circle* p = &donut;
	cout << "p->getArea() : " << p->getArea() << endl;

	p = &pizza;
	cout << "p->getArea() : " << p->getArea() << endl;
	
	// �Ҹ��ڴ� '��ü'(donut�� pizza, p�� �ӽ� ����)�� �Ҹ��Ų��. -> �Ҹ��ڴ� 2ȸ ����

	return 0;
}
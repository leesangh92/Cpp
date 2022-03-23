#include <iostream>

using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle() // �⺻ ������ : Ŭ���� �̸��� ������ �޼���. ��ü�� ������ �� ���� ������ �ʾƵ� �ڵ����� �����ȴ�. 
	{
		cout << "Circle()" << endl;
		radius = 0; // ��ü �ʱ�ȭ�� �����̴�. 
	}

	Circle(int r) // int�� ���ڷ� ���� ������ // �����ڵ� overloading�� �ȴ�. 
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
	Circle donut; // ��ü�� ������ ���ÿ� ������ ȣ��
	cout << "������ : " << donut.getRadius() << endl;

	Circle pizza(30);
	cout << "������ : " << pizza.getRadius() << endl;

	cout << "====================" << endl;

	Circle c1; // Circle() ������ ����
	Circle c2(1); // Circle(int r) ������ ����
	Circle c3 = Circle(); // ������ ����� ȣ��, Circle() ������ ����
	Circle c4 = Circle(3); // Circle(int r)  ������ ����

	Circle c5(); // �Լ� �������� �ν�. // return value�� Circle

	return 0;
}
#include <iostream>

using namespace std;

class Circle // Ŭ���� �����
{
public:
	int radius;
	int GetRadius()
	{
		return radius;
	}
	
	double GetArea(); // �Ϲ������� class �ȿ��� ���� ���ش�. �ڵ尡 �������� ���� �� ����� �� ���� ����.
};

double Circle::GetArea() // Ŭ���� ������ // class �� �Լ��� class�� ���ԵǾ� �ִٴ� ���� �˷��ִ� ���.
{
	return radius * radius * 3.14;
}

int main()
{
	Circle donut;

	donut.radius = 1;
	cout << "������ : " << donut.GetRadius() << endl;

	double area = donut.GetArea();
	cout << "���� : " << area << endl;

	Circle pizza;
	pizza.radius = 5;
	cout << "���� : " << pizza.GetArea() << endl;

	return 0;
}
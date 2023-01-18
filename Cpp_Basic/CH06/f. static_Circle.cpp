#include <iostream>

using namespace std;

class Circle
{
private:
	int radius; // ������� // �������� // ��ü'����' ���������
	static int numOfCircles; // �������� : Ŭ���� ������ �����Ǵ� ���� // ��ü '�ϳ�����' ���������
public:
	Circle(int r = 1)
	{
		radius = r;
		numOfCircles++;

		cout << "Circle(int r = 1) radius : " << radius << "number of Circles : " << numOfCircles << endl;
	}

	~Circle()
	{
		numOfCircles--;
	}

	int getRadius() // �Ϲݸ޼���
	{
		return radius;
	}

	static int getNumOfCircles() // �����޼��� : ���������� ���� ���븸 �� �� �ִ�.  �Ϲݸ������ ������ �� ����. 
	{
		return numOfCircles;
	}
};

int Circle::numOfCircles = 0; // Circle Ŭ������ �������� �ʱ�ȭ : Ŭ���� �ۿ��� �ʱ�ȭ

int main()
{
	cout << "���� Circle�� �� : " << Circle::getNumOfCircles() << endl; // �����޼���� ����������� ������ �� �ִ�.
	
	Circle* p = new Circle[10];
	cout << "���� Circle�� �� : " << Circle::getNumOfCircles() << endl;

	p->getNumOfCircles();
	cout << "���� Circle�� �� : " << p->getNumOfCircles() << endl;

	delete[] p;
	cout << "���� Circle�� �� : " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "���� Circle�� �� : " << a.getNumOfCircles() << endl;

	Circle b; // ���������� Ŭ���� ������ �����Ѵ�.
	cout << "���� Circle�� �� : " << b.getNumOfCircles() << endl;

	return 0;
}
#include <iostream>

using namespace std;

class Circle
{
private:
	int radius = 0; // �ʱ�ȭ ���� 0
public:
	//Circle() // �⺻(default) ������ : ����� ���� �����ڰ� ���� ���� ȣ��ȴ�. 
	//{
	//	cout << "Circle()" << endl;
	//	radius = 0;
	//}

	Circle(int r) : radius(r)
	{
		cout << "Circle(int r)" << endl;
	}

	int getRadius() { return radius; }
};

int main()
{
	Circle donut(10);
	cout << "������ : " << donut.getRadius() << endl;

	Circle pizza;
	cout << "������ : " << pizza.getRadius() << endl;

	return 0;
}
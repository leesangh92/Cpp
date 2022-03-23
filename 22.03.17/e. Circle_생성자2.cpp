#include <iostream>

using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle() : Circle(5) // �̿� ������(���� ������) ȣ�� : ������ �� ���ڸ� ����ϴ� overloading �� �޼��带 ȣ���ϰ� ���ƿ´�.
	{
		cout << "Circle()" << endl;
	}

	Circle(int r) : radius(r) // �ݷ� �ʱ�ȭ : ��� �ʱ�ȭ�� ���� ��� (�ٸ� �޼��忡���� ��� �Ұ���. �����ڸ� ��� ����.)
	{
		cout << "Circle(int r)" << endl;
		//radius = r; // ��� �ʱ�ȭ
	}

	int getRadius() { return radius; }
};

int main()
{
	Circle donut;
	cout << "������ : " << donut.getRadius() << endl;

	Circle pizza(30);
	cout << "������ : " << pizza.getRadius() << endl;

	return 0;
}
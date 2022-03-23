#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	Point(int _x = 0, int _y = 0)
	{
		x = _x, y = _y;
	}

	void showData()
	{
		cout << "x : " << x << ", y : " << y << endl;
	}

	//����� ���� ���� ������
	Point(const Point &ref)
	{
		cout << "Point(const Point &ref)" << endl;
		x = ref.x;
		y = ref.y;
	}
	//p3 = p1;
	Point &operator=(const Point &ref)
	{
		cout << "operator=(const Point &ref)" << endl;
		this->x = ref.x;
		this->y = ref.y;

		return *this;
	}
};

int main()
{
	Point p1(1, 5);
	Point p2(p1); // ���ο� ��ü ���� // ����� ���� ���� �����ڸ� ������ ������ ����Ʈ��������� ȣ��, ��� �� ��� ����
	// ���� �����ڴ� ��ü�� ������ ���ÿ� ��ü�� ���� �� ȣ��ȴ�.

	p1.showData();
	p2.showData();

	Point p3;
	p3 = p1; // ��ü ������ �ƴ� ���� // ����Ʈ ���Կ����� �޼��尡 ����
	//p3.operator=(p1)
	//��ü�� ���Թ����� ��ü�� ���� �� ȣ��ȴ�.
	p3.showData();

	cout << "====================" << endl;

	Point p4, p5;
	p5 = p4 = p1;
	p4.showData();
	p5.showData(); // �������� ���� ����.

	return 0;
}
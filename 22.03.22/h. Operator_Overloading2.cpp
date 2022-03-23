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
	
	//++p1;
	Point& operator++()
	{
		this->x++;
		y++;

		return *this;
	}

	//p3 = p2++;
	Point operator++(int)
	{
		Point tmp(x++, y++);

		return tmp;
	}

	friend Point& operator--(Point& ref);
	friend Point operator--(Point& ref, int);
};

//--p1;
Point& operator--(Point &ref)
{
	ref.x--;
	ref.y--;

	return ref;
}

//p4 = p2--;
Point operator--(Point& ref, int)
{
	Point tmp(ref.x--, ref.y--);

	return tmp;
}

int main()
{
	Point p1(1, 1);

	++p1; // p1.operator++() // ����Լ� ȣ�� ���
	p1.showData();

	++(++p1);
	(++(++p1)).showData();
	p1.showData();

	--p1; // operator--(p1) // �����Լ� ȣ�� ���
	p1.showData();

	cout << "====================" << endl;

	//++p1; // p1.operator++(int) // ��������
	//p1++; // p1.operator++() // ��������

	Point p2(1, 1);
	Point p3 = p2++; // p1.operator++(int) // ����Լ� ȣ�� ���
	p2.showData(); // 2, 2
	p3.showData(); // 1, 1

	cout << "====================" << endl;

	Point p4 = p2--; // operator--(p2, int) // �����Լ� ȣ�� ���
	p2.showData(); // 1, 1
	p4.showData(); // 2, 2

	return 0;
}
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

	friend ostream& operator<<(ostream& os, Point& ref);
};

ostream &operator<<(ostream& os, Point &ref)
{
	os << ref.x << ", " << ref.y << endl; // x, y�� private ���
	return os;
}

int main()
{
	Point p1(3, 5);
	
	cout << p1 << endl;
	//cout.operator<<(p1) // ����Լ��δ� ȣ���� �� ����. p1(��ü)�� ���� "��¿����� << �޼���"�� ����. 
	//operator<<(cout, p1) // �����Լ��� ȣ���Ѵ�.

	return 0;
}
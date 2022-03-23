#include <iostream>
using namespace std;

// �ݵ�� �����Լ��� �����ε��� �Ǿ�� �ϴ� ��� : ù��° ���ڰ� this�� �ƴ� ���.

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

	friend Point operator+(int n, const Point& ref);
};

Point operator+(int n, const Point& ref) // �����Լ�
{
	Point tmp(n + ref.x, n + ref.y);

	return tmp;
}

int main()
{
	Point p1(1, 1);
	Point p2 = 30 + p1; //30.operator+(p1) // ù��° ���ڰ� �ݵ�� this(�����ü)���߸� �Ѵ�. // ����Լ� �ۼ� �Ұ�
	                    //operator+(30, p2) // �����Լ��� �ۼ�
	p2.showData();

	return 0;
}
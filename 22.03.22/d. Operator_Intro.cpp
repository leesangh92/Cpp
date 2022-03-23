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

	//p2 = p1 + 30
	Point operator+(int value) // ������ overloading �Լ�
	{
		Point tmp;

		tmp.x = this->x + value;
		tmp.y = this->y + value;

		return tmp;
	}

	Point(const Point& ref) // ���� ������
	{
		cout << "Point(const Point &ref)" << endl;
		x = ref.x;
		y = ref.y;
	}
};

int main()
{
	Point p1(1, 2);
	p1.showData();

	        // operator + (30)
	Point p2 = p1 + 30; // F9 : �߰���(break point) // ��ü�� �����ʰ� ���ÿ� �ʱ�ȭ�� �� �� ���� �����ڰ� �����ȴ�.
	p2.showData();

	return 0;
}
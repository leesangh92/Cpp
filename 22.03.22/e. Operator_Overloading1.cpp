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

	Point operator+(const Point& ref); // 멤버함수
	friend Point operator-(const Point& ref1, const Point& ref2); // 전역함수
};

Point Point::operator+(const Point& ref) // 멤버함수
{
	Point tmp(x + ref.x, y + ref.y);

	return tmp;
}

Point operator-(const Point &ref1, const Point &ref2) // 전역함수
{
	Point tmp(ref1.x - ref2.x, ref1.y - ref2.y);

	return tmp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	//멤버함수로 구현
	Point p3 = p1 + p2; // operator+(p2)
	p3.showData();

	//전역함수로 구현
	Point p4 = p3 - p1; // operator-(p3, p1)
	p4.showData();

	return 0;
}

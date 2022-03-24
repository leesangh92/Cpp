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
	os << ref.x << ", " << ref.y << endl; // x, y는 private 멤버
	return os;
}

int main()
{
	Point p1(3, 5);
	
	cout << p1 << endl;
	//cout.operator<<(p1) // 멤버함수로는 호출할 수 없다. p1(객체)을 받을 "출력연산자 << 메서드"가 없다. 
	//operator<<(cout, p1) // 전역함수로 호출한다.

	return 0;
}
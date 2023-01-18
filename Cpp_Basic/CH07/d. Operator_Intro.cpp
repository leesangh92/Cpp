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
	Point operator+(int value) // 연산자 overloading 함수
	{
		Point tmp;

		tmp.x = this->x + value;
		tmp.y = this->y + value;

		return tmp;
	}

	Point(const Point& ref) // 복사 생성자
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
	Point p2 = p1 + 30; // F9 : 중간점(break point) // 객체가 생성됨과 동시에 초기화가 될 때 복사 생성자가 생성된다.
	p2.showData();

	return 0;
}
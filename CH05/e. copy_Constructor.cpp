#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;
public:
	Point()
	{
		cout << "Point()" << endl;
	}

	Point(int _x, int _y)
	{
		cout << "Point(int _x, int _y)" << endl;
		x = _x, y = _y;
	}

	//복사 생성자를 만들지 않아도 디폴트 복사 생성자가 생성된다. 
	Point(const Point &ref) // 복사 생성자 : 객체가 생성과 동시에 객체로 초기화될 때 복사 생성자가 호출된다. 
	{
		cout << "Point(const Point &ref)" << endl;
		x = ref.x; // 멤버 복사 // 복사 생성자를 만들면 복사 내용을 적어주어야한다. 
		y = ref.y; // 멤버 복사
	}

	void showData()
	{
		cout << x << ", " << y << endl;
	}
};

int main()
{
	Point p1(10, 20);

	Point p2(p1); // Point p2 = p1
	p2.showData();

	return 0;
}
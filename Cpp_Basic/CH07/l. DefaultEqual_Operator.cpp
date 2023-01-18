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

	//사용자 정의 복사 생성자
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
	Point p2(p1); // 새로운 객체 생성 // 사용자 정의 복사 생성자를 만들지 않으면 디폴트복사생성자 호출, 멤버 대 멤버 복사
	// 복사 생성자는 객체가 생성과 동시에 객체를 받을 때 호출된다.

	p1.showData();
	p2.showData();

	Point p3;
	p3 = p1; // 객체 생성이 아닌 대입 // 디폴트 대입연산자 메서드가 실행
	//p3.operator=(p1)
	//객체가 대입문으로 개체를 받을 때 호출된다.
	p3.showData();

	cout << "====================" << endl;

	Point p4, p5;
	p5 = p4 = p1;
	p4.showData();
	p5.showData(); // 연속적인 대입 가능.

	return 0;
}
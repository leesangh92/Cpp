#include <iostream>

using namespace std;

class Circle
{
private:
	int radius = 0; // 초기화 값이 0
public:
	//Circle() // 기본(default) 생성자 : 사용자 정의 생성자가 없을 때만 호출된다. 
	//{
	//	cout << "Circle()" << endl;
	//	radius = 0;
	//}

	Circle(int r) : radius(r)
	{
		cout << "Circle(int r)" << endl;
	}

	int getRadius() { return radius; }
};

int main()
{
	Circle donut(10);
	cout << "반지름 : " << donut.getRadius() << endl;

	Circle pizza;
	cout << "반지름 : " << pizza.getRadius() << endl;

	return 0;
}
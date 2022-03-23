#include <iostream>

using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle() : Circle(5) // 이웃 생성자(위임 생성자) 호출 : 생성자 중 인자를 사용하는 overloading 된 메서드를 호출하고 돌아온다.
	{
		cout << "Circle()" << endl;
	}

	Circle(int r) : radius(r) // 콜론 초기화 : 멤버 초기화와 같은 기능 (다른 메서드에서는 사용 불가능. 생성자만 사용 가능.)
	{
		cout << "Circle(int r)" << endl;
		//radius = r; // 멤버 초기화
	}

	int getRadius() { return radius; }
};

int main()
{
	Circle donut;
	cout << "반지름 : " << donut.getRadius() << endl;

	Circle pizza(30);
	cout << "반지름 : " << pizza.getRadius() << endl;

	return 0;
}
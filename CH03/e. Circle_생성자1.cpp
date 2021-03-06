#include <iostream>

using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle() // 기본 생성자 : 클래스 이름과 동일한 메서드. 객체가 생성될 때 직접 만들지 않아도 자동으로 생성된다. 
	{
		cout << "Circle()" << endl;
		radius = 0; // 객체 초기화가 목적이다. 
	}

	Circle(int r) // int를 인자로 갖는 생성자 // 생성자도 overloading이 된다. 
	{
		cout << "Circle(int r)" << endl;
		radius = r;
	}

	int getRadius() { return radius; }

	double getArea();
};

double Circle::getArea()
{
	return radius * radius * 3.14;
}

int main()
{
	Circle donut; // 객체는 생성과 동시에 생성자 호출
	cout << "반지름 : " << donut.getRadius() << endl;

	Circle pizza(30);
	cout << "반지름 : " << pizza.getRadius() << endl;

	cout << "====================" << endl;

	Circle c1; // Circle() 생성자 생성
	Circle c2(1); // Circle(int r) 생성자 생성
	Circle c3 = Circle(); // 생성자 명시적 호출, Circle() 생성자 생성
	Circle c4 = Circle(3); // Circle(int r)  생성자 생성

	Circle c5(); // 함수 선언문으로 인식. // return value가 Circle

	return 0;
}
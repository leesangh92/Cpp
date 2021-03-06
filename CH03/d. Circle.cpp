#include <iostream>

using namespace std;

class Circle // 클래스 선언부
{
public:
	int radius;
	int GetRadius()
	{
		return radius;
	}
	
	double GetArea(); // 일반적으로 class 안에는 선언만 해준다. 코드가 많아졌을 때는 이 방법이 더 보기 좋다.
};

double Circle::GetArea() // 클래스 구현부 // class 밖 함수가 class에 포함되어 있다는 것을 알려주는 방법.
{
	return radius * radius * 3.14;
}

int main()
{
	Circle donut;

	donut.radius = 1;
	cout << "반지름 : " << donut.GetRadius() << endl;

	double area = donut.GetArea();
	cout << "면적 : " << area << endl;

	Circle pizza;
	pizza.radius = 5;
	cout << "면적 : " << pizza.GetArea() << endl;

	return 0;
}
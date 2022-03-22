#include <iostream>

using namespace std;

class Circle
{
private:
	int radius; // 멤버변수 // 동적변수 // 객체'마다' 만들어진다
	static int numOfCircles; // 정적변수 : 클래스 내에서 공유되는 변수 // 객체 '하나에만' 만들어진다
public:
	Circle(int r = 1)
	{
		radius = r;
		numOfCircles++;

		cout << "Circle(int r = 1) radius : " << radius << "number of Circles : " << numOfCircles << endl;
	}

	~Circle()
	{
		numOfCircles--;
	}

	int getRadius() // 일반메서드
	{
		return radius;
	}

	static int getNumOfCircles() // 정적메서드 : 정적변수에 대한 내용만 올 수 있다.  일반멤버에는 접근할 수 없다. 
	{
		return numOfCircles;
	}
};

int Circle::numOfCircles = 0; // Circle 클래스의 정적변수 초기화 : 클래스 밖에서 초기화

int main()
{
	cout << "현재 Circle의 수 : " << Circle::getNumOfCircles() << endl; // 정적메서드는 정적멤버에만 접근할 수 있다.
	
	Circle* p = new Circle[10];
	cout << "현재 Circle의 수 : " << Circle::getNumOfCircles() << endl;

	p->getNumOfCircles();
	cout << "현재 Circle의 수 : " << p->getNumOfCircles() << endl;

	delete[] p;
	cout << "현재 Circle의 수 : " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "현재 Circle의 수 : " << a.getNumOfCircles() << endl;

	Circle b; // 정적변수는 클래스 내에서 공유한다.
	cout << "현재 Circle의 수 : " << b.getNumOfCircles() << endl;

	return 0;
}

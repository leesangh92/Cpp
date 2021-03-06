#include <iostream>

using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle()
	{
		cout << "Circle()" << endl;
		radius = 1;
	}

	Circle(int r)
	{
		cout << "Circle(int r)" << endl;
		radius = r;
	}

	~Circle()
	{
		cout << "~Circle()" << endl;
	}

	int getRadius()
	{
		return radius;
	}

	void setRadius(int r)
	{
		radius = r;
	}
	
	double getArea()
	{
		return radius * radius * 3.14;
	}
};

int main()
{
	Circle circleArray[3]; // 객체 배열
	
	circleArray[0].setRadius(00);
	circleArray[1].setRadius(10);
	circleArray[2].setRadius(20);

	(*(circleArray + 1)).setRadius(10);
	circleArray[2].setRadius(20);

	for (int i = 0; i < 3; i++)
	{
		cout << circleArray[i].getRadius() << endl;
	}

	Circle* p = circleArray;
	for (int i = 0; i < 3; i++)
	{
		cout << "Area : " << p->getArea() << endl;
		p++;
	}

	cout << "==============================" << endl;

	Circle c1[2]; // 빈 괄호 생성자를 2번 부른다.
	//Circle c2[3] = { 1, 2, 3 }; // circle(int) 생성자를 3번 부른다. 첫번째, 두번째, 세번째 객체의 초기화
	Circle c2[3] = { Circle(1), Circle(2), Circle(3) }; // circle(int) 생성자 3번 생성 // 객체 배열의 초기화

	return 0;
}
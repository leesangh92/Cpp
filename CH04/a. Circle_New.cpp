#include <iostream>
#include <vld.h>

using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle()
	{
		//cout << "Circle()" << endl;
		radius = 1;
	}

	Circle(int r)
	{
		//cout << "Circle(int r)" << endl;
		radius = r;
	}

	~Circle()
	{
		cout << "~Circle()" << radius <<  endl;
	}

	int getRadius()
	{
		return radius;
	}

	void setRadius(int r)
	{
		radius = r; // this->radius = r; (this가 생략된 것)
		//this->radius = radius // 무엇이 멤버이고 무엇이 인자인지 구분이 힘들때 this 로 멤버를 보여준다. 
	}

	double getArea()
	{
		return radius * radius * 3.14; // return this->radius * radius * 3.14;
	}
};

int main()
{
	//Circle c1; // 객체 변수
	Circle c1(5);
	
	Circle* p1 = new Circle; // 인자가 없을 때 괄호 생략 가능
	Circle* p2 = new Circle();

	Circle* p3;
	p3 = new Circle(10);
	p3->setRadius(25);

	cout << p1->getRadius() << endl;
	cout << p2->getRadius() << endl;
	cout << p3->getRadius() << endl;

	Circle* p4 = &c1; // stack 세그먼트에 있는 객체 // delete로 메모리 해제를 안한다.
	cout << p4->getRadius() << endl;

	Circle* p5 = new Circle(c1);
	cout << p5->getRadius() << endl;

	//delete 하기 전 소멸자는 1개만 생성.
	delete p1; // heap 세그먼트에 있는 데이터는 delete를 하지 않으면 소멸자가 생성되지 않는다. 
	delete p2;
	delete p3;
	delete p5;

	return 0;
}

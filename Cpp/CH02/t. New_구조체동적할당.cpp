#include <iostream>

using namespace std;

typedef struct _Point
{
	int x;
	int y;
} Point;

void Pnt1(Point &ref) // 참조자로 데이터 변경
{
	ref.x = 100;
	ref.y = 100;
}

void Pnt2(Point *p) // 포인터로 참조하여 데이터 변경
{
	p->x = 200;
	p->y = 200;
}

Point *PntAdder(Point &ref1, Point &ref2) // 참조자는 데이터에 직접적으로 엑세스한다.
{
	Point* p3 = new Point;
	p3->x = ref1.x + ref2.y;
	p3->y = ref1.y + ref2.y;

	return p3;
}

Point &PntAdder2(Point& ref1, Point& ref2)
{
	Point* p3 = new Point;
	p3->x = ref1.x + ref2.y;
	p3->y = ref1.y + ref2.y;

	return *p3;
}

int main()
{
	Point* p1 = new Point;
	p1->x = 10; // 구조체포인터 -> 멤버
	p1->y = 10;

	Point* p2 = new Point;
	p2->x = 20;
	p2->y = 20;

	Pnt1(*p1);
	cout << "p1 : " << p1->x << ", " << p1->y << endl;

	Pnt2(p2);
	cout << "p2 : " << p2->x << ", " << p2->y << endl;

	Point *pref = PntAdder(*p1, *p2);
	cout << "*pref : " << pref->x << ", " << pref->y << endl;

	Point &pref2 = PntAdder2(*p1, *p2);
	cout << "pref2 : " << pref2.x << ", " << pref2.y << endl;

	delete p1;
	delete p2;
	delete pref;
	delete &pref2; // 참조변수는 참조자로 해제한다
	// 메모리 누수 방지

	return 0;
}
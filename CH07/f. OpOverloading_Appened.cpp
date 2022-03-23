#include <iostream>
using namespace std;

class Point 
{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void ShowPosition();
	Point operator+(const Point& p);
	Point operator-(const Point& p);
	bool operator==(const Point& p);
	bool operator!=(const Point& p);
	Point& operator+=(const Point& p);
	//void operator+=(const Point& p);
	Point& operator-=(const Point& p);
};

void Point::ShowPosition()
{
	cout << x << " , " << y << endl;
}

Point Point::operator+(const Point& p)
{
	Point temp(x + p.x, y + p.y);
	return temp;  
}

Point Point::operator-(const Point& p)
{
	Point temp(this->x - p.x, this->y - p.y);
	return temp;
}

//p1 == p2
bool Point::operator==(const Point& p)
{
	if(x == p.x && y == p.y)
		return true;
	else
		return false;
}

//p1 != p2
bool Point::operator!=(const Point& p)
{
	/*if (this->x != p.x && this->y != p.y)
		return true;
	else
		return false;*/

	return !(*this == p);
}

//p1 += p2
Point& Point::operator+=(const Point& p)
{
	this->x += p.x;
	this->y += p.y;

	return *this;
}

//p1 += p2
//void Point::operator+=(const Point& p)
//{
//	this->x += p.x;
//	this->y += p.y;
//}

//p1-=p2
Point& Point::operator-=(const Point& p)
{
	this->x -= p.x;
	this->y -= p.y;

	return *this;
}

int main()
{
	Point p1(10, 10);
	Point p2(3, 3);

	Point p3 = p1 + p2;
	p3.ShowPosition(); //13, 13

	p3 = p1 - p2;
	p3.ShowPosition(); //7, 7
	cout << "=======================" << endl;

	if (p1 == p2)
		cout << "Equal." << endl << endl;
	else
		cout << "Not Equal." << endl;

	if (p1 != p2)
		cout << "같지않다." << endl;
	else
		cout << "같다." << endl << endl;

	p1.ShowPosition(); //10,10  
	p2.ShowPosition(); //3, 3

	p1 += p2; // 리턴 값이 void이어도 가능한 함수
	//(p1 += p2).ShowPosition(); // 리턴 값이 참조자이면 가능한 함수
	p1.ShowPosition();  //13, 13   

	p1 -= p2;
	p1.ShowPosition();  //10, 10  


	return 0;
}
#include <iostream>

using namespace std;

class Point
{
private:
	int x, y; // 0~100사이
public:
	int getX() { return x; }

	int getY() { return x; }

	bool setX(int _x) 
	{
		if (_x < 1 || _x > 100)
		{
			cout << "x 좌표 오류, 좌표값은 1부터 100 사이.";
			return false;
		}
		x = _x;
		return true;
	}
	//void setX(int &_x) { x = _x; } // 참조 사용

	bool setY(int _y)
	{
		if (_y < 1 || _y > 100)
		{
			cout << "y 좌표 오류, 좌표값은 1부터 100 사이.";
			return false;
		}
		x = _y;
		return true;
	}
	//void setY(int &_y) { y = _y; }

	void showXY()
	{
		cout << "좌표 x : " << x << "좌표 y : " << y << endl;
	}
};

class A // 다른 클래스에 있는 멤버들은 그 멤버가 속해있는 클래스에서 메서드로 해결해라. (캡슐화)
{
public:
	void print(Point &refP)
	{
		cout << "class A, print(Point &refP) " << endl;
		refP.showXY();
	}
};

int main()
{
	int x, y;
	cout << "좌표 x, y (1 ~ 100 사이) ? ";
	cin >> x >> y; // 10, 30

	Point p1;
	bool b1, b2;

	b1 = p1.setX(x);
	b2 = p1.setY(y);

	if (b1 && b2)
	{
		cout << "입력된 좌표를 사용하여 image 작업시작." << endl;
		//p1.showXY();
		cout << "x : " << p1.getX() << ", " << "y : " << p1.getY() << endl;
	}
	else
	{
		cout << "좌표가 올바르지 않습니다." << endl;
		p1.showXY();
	}

	A tmp;
	tmp.print(p1);

	return 0;
}
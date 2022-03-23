#include <iostream>
#include <cstring>
using namespace std;

class Point
{
private:
	int x, y;
	
public:
	void set(int _x, int _y)
	{
		this->x = _x;
		this->y = _y;
	}

	void showPoint()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

class ColorPoint : public Point // 상속
{
private:
	string color;

public:
	ColorPoint()
	{	}

	void setColor(string _color)
	{
		color = _color;
	}

	void showColorPoint()
	{
		cout << color << " : ";
		showPoint();
		//cout << "(" << x << ", " << y << ")" << endl; // x, y는 private 변수이므로 사용 불가
		//메모리만 상속받은 것이다.
	}
};

int main()
{
	ColorPoint cp;

	cp.set(10, 20);
	cp.setColor("Red");

	cp.showColorPoint();
	cp.showPoint();

	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

class Point
{
protected: // 상속 관계에서만 의미가 있다. 상속관계가 아니라면 private.
	int x, y;

public:
	void set(int x, int y)
	{
		this->x = x;
		this->y = y;
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
		//showPoint();
		cout << "(" << x << ", " << y << ")" << endl; // 상속받은 파생 함수에서 protected 멤버를 직접 사용할 수 있다. 
	}

	bool equals(ColorPoint& ref)
	{
		if (x == ref.x && y == ref.y)
			return true;
		else
			return false;
	}
};

int main()
{
	ColorPoint cp;

	cp.set(10, 20);
	cp.setColor("Red");

	//cp.x = 100; // 외부에서는 사용 불가능

	cp.showColorPoint();
	
	cout << "====================" << endl;

	ColorPoint cp2;

	cp2.set(10, 20);
	cp2.setColor("Red");

	cout << ((cp.equals(cp2)) ? "Equal": "Not Equal") << endl;

	cout << "====================" << endl;

	return 0;
}
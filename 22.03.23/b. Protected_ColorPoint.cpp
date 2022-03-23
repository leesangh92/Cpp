#include <iostream>
#include <cstring>
using namespace std;

class Point
{
protected: // ��� ���迡���� �ǹ̰� �ִ�. ��Ӱ��谡 �ƴ϶�� private.
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

class ColorPoint : public Point // ���
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
		cout << "(" << x << ", " << y << ")" << endl; // ��ӹ��� �Ļ� �Լ����� protected ����� ���� ����� �� �ִ�. 
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

	//cp.x = 100; // �ܺο����� ��� �Ұ���

	cp.showColorPoint();
	
	cout << "====================" << endl;

	ColorPoint cp2;

	cp2.set(10, 20);
	cp2.setColor("Red");

	cout << ((cp.equals(cp2)) ? "Equal": "Not Equal") << endl;

	cout << "====================" << endl;

	return 0;
}
#include <iostream>

using namespace std;

class Point
{
private:
	int x, y; // 0~100����
public:
	int getX() { return x; }

	int getY() { return x; }

	bool setX(int _x) 
	{
		if (_x < 1 || _x > 100)
		{
			cout << "x ��ǥ ����, ��ǥ���� 1���� 100 ����.";
			return false;
		}
		x = _x;
		return true;
	}
	//void setX(int &_x) { x = _x; } // ���� ���

	bool setY(int _y)
	{
		if (_y < 1 || _y > 100)
		{
			cout << "y ��ǥ ����, ��ǥ���� 1���� 100 ����.";
			return false;
		}
		x = _y;
		return true;
	}
	//void setY(int &_y) { y = _y; }

	void showXY()
	{
		cout << "��ǥ x : " << x << "��ǥ y : " << y << endl;
	}
};

class A // �ٸ� Ŭ������ �ִ� ������� �� ����� �����ִ� Ŭ�������� �޼���� �ذ��ض�. (ĸ��ȭ)
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
	cout << "��ǥ x, y (1 ~ 100 ����) ? ";
	cin >> x >> y; // 10, 30

	Point p1;
	bool b1, b2;

	b1 = p1.setX(x);
	b2 = p1.setY(y);

	if (b1 && b2)
	{
		cout << "�Էµ� ��ǥ�� ����Ͽ� image �۾�����." << endl;
		//p1.showXY();
		cout << "x : " << p1.getX() << ", " << "y : " << p1.getY() << endl;
	}
	else
	{
		cout << "��ǥ�� �ùٸ��� �ʽ��ϴ�." << endl;
		p1.showXY();
	}

	A tmp;
	tmp.print(p1);

	return 0;
}
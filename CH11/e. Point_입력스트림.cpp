#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	Point(int _x = 0, int _y = 0)
	{
		x = _x, y = _y;
	}

	friend ostream& operator<<(ostream& os, Point& ref);
	friend istream& operator>>(istream& is, Point& ref);
};

ostream& operator<<(ostream& os, Point& ref)
{
	os << ref.x << ", " << ref.y << endl;
	return os;
}

istream& operator>>(istream& is, Point& ref)
{
	cout << "x : ";
	is >> ref.x;

	cout << "y : ";
	is >> ref.y;

	return is;
}

int main()
{
	Point p1;

	//operator>>(cin, p1)
	cin >> p1;
	cout << p1;

	Point p2, p3;

	cin >> p2 >> p3;
	cout << p2 << p3;

	return 0;
}
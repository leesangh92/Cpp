#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;
public:
	Point()
	{
		cout << "Point()" << endl;
	}

	Point(int _x, int _y)
	{
		cout << "Point(int _x, int _y)" << endl;
		x = _x, y = _y;
	}

	//���� �����ڸ� ������ �ʾƵ� ����Ʈ ���� �����ڰ� �����ȴ�. 
	Point(const Point &ref) // ���� ������ : ��ü�� ������ ���ÿ� ��ü�� �ʱ�ȭ�� �� ���� �����ڰ� ȣ��ȴ�. 
	{
		cout << "Point(const Point &ref)" << endl;
		x = ref.x; // ��� ���� // ���� �����ڸ� ����� ���� ������ �����־���Ѵ�. 
		y = ref.y; // ��� ����
	}

	void showData()
	{
		cout << x << ", " << y << endl;
	}
};

int main()
{
	Point p1(10, 20);

	Point p2(p1); // Point p2 = p1
	p2.showData();

	return 0;
}
#include <iostream>
using namespace std;

//���׿����� �����ε�( -(��ȣ����), ~(�� ��� ��ȯ)
/*
[9, -7]
[-9, 7]

[7, -9]
*/

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{  }

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point operator-()
	{
		Point temp(-xpos, -ypos);
		return temp;
	}

	//[-9, 7]
	/*void operator~()
	{
		int temp;

		temp = xpos;
		xpos = ypos;
		ypos = temp;
	}*/

	//[-9, 7]
	Point &operator~()
	{
		int temp;

		temp = xpos;
		xpos = ypos;
		ypos = temp;

		return *this; // ��ü ��ȯ
	}
};



int main()
{
	Point pos1(9, -7);

	Point pos2 = -pos1; //pos1.operator-()
	pos1.ShowPosition();
	pos2.ShowPosition();
	cout << endl;

	~pos2; // �� �� ��ȯ //pos2.operator~()
	pos2.ShowPosition();
	//(~pos2).ShowPosition(); // �����ڷ� ��ȯ�߱� ������ ����.(Point &operator~())

	return 0;
}

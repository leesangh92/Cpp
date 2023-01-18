#include <iostream>
using namespace std;

int main()
{
	int x = 1, y, z;

	y = x++;
	cout << "x : " << x << ", y : " << y << endl;

	z = ++x;
	cout << "x : " << x << ", z : " << z << endl;

	//x++;
	//y++;

	return 0;
}
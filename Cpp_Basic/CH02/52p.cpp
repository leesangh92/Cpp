#include <iostream>

using namespace std;

/*
1���� 10���� ���ϱ�
*/

int main()
{
	int i;
	int a = 0;

	for (i = 1; i <= 10; i++)
	{
		cout << i << ", ";
		a += i;
		cout << a << ", \n";
	}
	cout << "1���� 10���� ���� ����� " << a << "�Դϴ�." << endl;

	return 0;
}

/*
*
**
***
****
����ϱ�
*/

int main()
{
	int i, j;

	for (i = 1; i <= 3; i++)
	{
		for (j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n" << endl;
	}

	return 0;
}
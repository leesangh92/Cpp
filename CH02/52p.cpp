#include <iostream>

using namespace std;

/*
1부터 10까지 더하기
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
	cout << "1부터 10까지 더한 결과는 " << a << "입니다." << endl;

	return 0;
}

/*
*
**
***
****
출력하기
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
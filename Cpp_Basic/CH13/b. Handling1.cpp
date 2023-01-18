#include <iostream>
using namespace std;

int main()
{
	int a, b;

input:
	cout << "두 수를 입력 : ";
	cin >> a >> b;

	try 
	{
		if (b == 0)
			throw b;
		cout << "a/b = " << a / b << endl;
		cout << "a*b = " << a % b << endl;
	}

	catch (int exp)
	{
		cout << exp << " 입력됨.. 입력 오류!!!" << endl;

		cout << "다시 입력하세요" << endl;
		goto input;
	}

	catch (...)
	{
		cout << "알 수 없는 오류!!!" << endl;
	}

	cout << "End." << endl;

	return 0;
}
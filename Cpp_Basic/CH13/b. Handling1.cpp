#include <iostream>
using namespace std;

int main()
{
	int a, b;

input:
	cout << "�� ���� �Է� : ";
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
		cout << exp << " �Էµ�.. �Է� ����!!!" << endl;

		cout << "�ٽ� �Է��ϼ���" << endl;
		goto input;
	}

	catch (...)
	{
		cout << "�� �� ���� ����!!!" << endl;
	}

	cout << "End." << endl;

	return 0;
}
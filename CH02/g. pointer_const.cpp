#include <iostream>

using namespace std;

int main()
{
	const int PI = 3.14159; // ������ ���ȭ

	int num1 = 100, num2 = 200;

	const int* p1 = &num1; // �����Ͱ� ����Ű�� ���� ���ȭ
	//*p1 = 150; // ����
	p1 = &num2;
	cout << "*p1 : " << *p1 << endl;

	int* const p2 = &num2; // �����͸� ���� ���� �ּҸ� ���ȭ
	*p2 = 250;
	//*p2 = &num1 // ����
	cout << "*p2 : " << *p2 << endl;

	const int* const p3 = &num1;
	//*p3 = 150; // ����
	//p3 = &num2; // ����
	cout << "*p3 : " << *p3 << endl;

	return 0;
}
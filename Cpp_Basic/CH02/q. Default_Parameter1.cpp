#include <iostream>

using namespace std;

int Add(int num1 = 1, int num2 = 1) // ����Ʈ����
{
	return num1 + num2;
}

//int Add(int num1 = 1, int num2) 
// ����Ʈ���ڴ� ��� �Ǵ� �������� ���� ���ڶ�� �ԷµǾ��� �� 
// �տ��� ���������� �Էµ� ���ڸ� ����ϱ� ������ 
// ������ ���ڿ� ����Ʈ���ڸ� ����� �� �ֵ��� �ڿ������� ä���ִ´�. 
//{
//	return num1 + num2;
//}

int Sub(int num1 = 1, int num2 = 1); // �޼��� ����
// ����Ʈ���� ���� �ݵ�� ����ο�'��' �д�!!! ����ο� ���� �ʴ´�. 

int main()
{
	cout << Add() << endl;
	cout << Add(10) << endl;
	cout << Add(10, 20) << endl;

	cout << Sub() << endl;
	cout << Sub(10) << endl;
	cout << Sub(10, 20) << endl;

	return 0;
}

int Sub(int num1, int num2) // ����Ʈ���� ���� �ݵ�� ����ο�'��' �д�!!! ����ο� ���� �ʴ´�. 
{
	return num1 - num2;
}
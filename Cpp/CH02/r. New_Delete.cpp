#include <iostream>

using namespace std;

int main()
{
	int* num = new int;
	int* N = new int(200); // �޸� �Ҵ�� ���ÿ� �ʱ�ȭ
	char* str = new char[20];
	int* Array = new int[5]; // [] : �迭

	*num = 100;
	strcpy(str, "hello world.");
	*(Array + 0) = 10;
	*(Array + 1) = 20;

	cout << *num << endl;
	cout << *N << endl;
	cout << str << endl;
	cout << Array[0] << endl;
	cout << Array[1] << endl;
	cout << Array[2] << ", " << Array[3] << endl; // �迭�� �Ҵ��ϰ� �����ͷ� ä���� ������ �����Ⱚ�� ����ִ�. 



	delete num; // �Ҵ�� ���� �޸� ����
	delete N;
	delete[] str; // [] : �迭�� ���
	delete[] Array;

	num = NULL; // ������ �޸𸮴� ���� ������ ���� �� �����Ƿ� NULL�� �ʱ�ȭ �����ش�.
	N = NULL;
	str = nullptr;
	Array = nullptr;

	return 0;
}
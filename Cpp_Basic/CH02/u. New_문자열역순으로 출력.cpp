#include <iostream>

using namespace std;

char* ReverseString(const char* src, int len) // ���ڿ��� �������� �����Ѵ�.
{
	char* dest = new char[len + 1];

	for (int i = 0; i < len; ++i) // ���ڿ��� �������� ���� // �ܵ����� �Ͼ�� �����̱� ������ ����/�������� �������
	{
		dest[i] = src[len - i - 1];
	}
	dest[len] = NULL; // ���ڿ� ���� NULL

	return dest;
}

int main()
{
	const char original[] = "Multi Campus";

	char* copy = ReverseString(original, strlen(original));

	cout << original << "\n";
	cout << copy << "\n";

	delete[] copy;
	copy = NULL;

	return 0;
}
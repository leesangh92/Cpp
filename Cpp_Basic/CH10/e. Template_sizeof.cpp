#include <iostream>
using namespace std;

template <typename T>
int sizeOf(T x)
{
	return sizeof(x); // �ּ��� ũ�⸦ ��ȯ
}

int sizeOf(const char* x) // �Ϲݸ޼��� // �Ϲݸ޼��尡 Ư���޼��庸�� �켱�Ѵ�. 
{
	cout << "sizeOf (const char* x) ";

	return strlen(x); // ���ڿ��� ũ�⸦ ��ȯ
}

// ���ø� Ư��ȭ : < ~ > �����̸� �� ���ø��� ������
template<>
int sizeOf <const char*>(const char* x)
{
	cout << "sizeOf <const char *>(const char* x) ";

	return strlen(x);
}

int main()
{
	int n = 100;
	double d = 3.9;
	cout << "sizeOf(n) : " << sizeOf(n) << endl;
	cout << "sizeOf(d) : " << sizeOf(d) << endl;

	const char* str = "hello world!!!"; // ���ڿ��� ũ��
	cout << "sizeOf(str) : " << sizeOf(str) << endl;
	cout << "sizeOf<const char *>(str) : " << sizeOf<const char *>(str) << endl;

	return 0;
}
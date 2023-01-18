#include <iostream>

using namespace std;

// �Լ� �ߺ� ����(method overloading) // C������ ���� �̸��� �Լ��� ������ �� �� �������� C++������ �����ϴ�. 
// C������ �Լ��� �̸������� ����, ��ü���⿡���� ��ȣ ���� ���ڱ��� ��� Ȯ���Ͽ� ����
void MyFunc()
{
	cout << "void MyFunc() : " << endl;
}

void MyFunc(const int x)
{
	cout << "void MyFunc(int x) : " << x << endl;
}

void MyFunc(const char x)
{
	cout << "void MyFunc(char x) : " << x << endl;
}

void MyFunc(const char *str)
{
	cout << "void MyFunc(const char *str) : " << str << endl;
}

void MyFunc(const int x, const double y)
{
	cout << "void MyFunc(int x, double y) : " << x << ", " << y << ", " << x+y <<endl;
}

int main()
{
	MyFunc();
	MyFunc(100);
	MyFunc("INFINITT healthcare");
	MyFunc(100, 3.5);

	MyFunc('A');
	MyFunc(100, 200);
	//MyFunc(100, 200, 300); // ������ ������ Ÿ���� �¾ƾ� �Ѵ�. 
	//MyFunc(5.5);

	//int N = MyFunc(200); // ���� // return Ÿ��(�Լ��� ��ȯ��)�� overloading ���ǿ� �ش���� �ʴ´�.

	return 0;
}
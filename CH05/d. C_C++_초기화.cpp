#include <iostream>

using namespace std;

class AAA
{
private:
	int value;
public:
	void showData()
	{
		cout << "value : " << value << endl;
	}

	AAA(int n)
	{
		value = n;
	}

	explicit AAA(int n) // ����� ȣ�⸸ ���. (������ ȣ���� ��� X)
	{
		value = n;
	}
};

int main()
{
	int n1 = 20; // C ��Ÿ�� �ʱ�ȭ
	int n2(30); // C++ ��Ÿ�� �ʱ�ȭ

	cout << "n1 : " << n1 << ", n2 : " << n2 << endl;

	AAA a1(100); // C++ ��Ÿ�� �ʱ�ȭ
	a1.showData();

	AAA a2 = 200; // C��Ÿ�� �ʱ�ȭ ���������� C++ ��Ÿ�Ϸ� ��ȯ����. 
	a2.showData();

	return 0;
}
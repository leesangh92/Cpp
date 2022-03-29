#include <iostream>
using namespace std;

class Type
{
private:
	int n;

public:
	Type(int _n) // ��ȯ������ : ���ڸ� �ϳ� ���� ������. ���������� Ÿ������ȯ
	{
		cout << "Type(int _n)" << endl;
		n = _n;
	}

	int getN()
	{
		return n;
	}

	//operator int() // ����ȯ������ (������ ����� ȣ�� ��� ���)
	explicit operator int() // ����ȯ������ (����� ȣ�⸸ ���)
	{
		return n;
	}
};

int main()
{
	Type data1(100);

	data1 = 200;
	//data1 = (Type)200;
	cout << "data1.getN() : " << data1.getN() << endl;

	cout << "===================" << endl;

	//int num = data1; //������ ȣ��
	//int num = (int)data1; //����� ȣ��(C)
	int num = static_cast<int>(data1); //����� ȣ��(C++)
	cout << "num : " << num << endl;

	return 0;
}
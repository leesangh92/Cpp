#include <iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;

public:
	SoBase() // �Ļ� Ŭ������ �ִٸ� �ݵ�� �⺻ �����ڰ� �־�� �Ѵ�!!!
	{
		cout << "SoBase() : " << baseNum << endl;
	}

	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase(int n) : " << baseNum << endl;
	}

	~SoBase()
	{
		cout << "~SoBase() : " << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int devNum;

public:
	SoDerived(int n) : SoBase(n) // ���Ŭ���� ����� ȣ��
	{
		cout << "SoDerived(int n) : " << devNum << endl;
	}

	/*SoDerived(int n) : devNum(n)
	{
		cout << "SoDerived(int n) : " << devNum << endl;
	}*/

	~SoDerived()
	{
		cout << "~SoDerived : " << devNum << endl;
	}
};

int main()
{
	SoDerived dr1(100);


	return 0;
}
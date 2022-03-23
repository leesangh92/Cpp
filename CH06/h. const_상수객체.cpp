#include <iostream>
using namespace std;

//��ü == ��ü == Object

class AAA
{
private:
	mutable int num;

public:
	AAA(int n) : num(n)
	{}

	void showData()
	{
		cout << "void showData()" << endl;
		cout << "num : " << num << endl;
	}

	void showData() const
	{
		cout << "void showData() const" << endl;
		cout << "num : " << num << endl;
	}

	void Add(int n)
	{
		num += n;
	}

	void Add(int n) const
	{
		num += n;
	}
};

int main()
{
	AAA a1(200); // �Ϲݰ�ü // �Ϲݸ޼��� �켱 ����, �Ϲݸ޼��尡 ���� ���� ���ȭ�� �޼��嵵 ����
	a1.showData();

	//const AAA a2(100); // �����ü
	//a2.showData(); // ����޼��常 ���� ����

	a1.Add(50);
	a1.showData();

	return 0;
}
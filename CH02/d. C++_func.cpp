#include <iostream>

using namespace std;

namespace BestCom
{
	void ShowMsg(); // �Լ� ����

	void simpleFunc()
	{
		cout << "BestCom simpleFunc() \n";
		ShowMsg(); // �Լ��� ȣ���ϱ� ���ؼ��� �ݵ�� �Լ� ������ �ؾ��Ѵ�. 
	}

	void ShowMsg()
	{
		cout << "BestCom simpleFunc()() \n";
	}

}

namespace ProgCom
{
	void simpleFunc()
	{
		cout << "ProgCom simpleFunc() \n";
	}
}

using namespace BestCom;
using namespace ProgCom;

int main()
{
	// :: => ���� ���� ������
	//BestCom::simpleFunc();
	//BestCom::ShowMsg();
	ShowMsg();

	BestCom::simpleFunc();
	ProgCom::simpleFunc();

	return 0;
}
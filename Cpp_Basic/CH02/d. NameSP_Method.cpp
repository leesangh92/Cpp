#include <iostream>

using namespace std;

#include "NameSP.h"


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
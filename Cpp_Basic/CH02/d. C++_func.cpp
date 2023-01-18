#include <iostream>

using namespace std;

namespace BestCom
{
	void ShowMsg(); // 함수 선언문

	void simpleFunc()
	{
		cout << "BestCom simpleFunc() \n";
		ShowMsg(); // 함수를 호출하기 위해서는 반드시 함수 선언을 해야한다. 
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
	// :: => 범위 지정 연산자
	//BestCom::simpleFunc();
	//BestCom::ShowMsg();
	ShowMsg();

	BestCom::simpleFunc();
	ProgCom::simpleFunc();

	return 0;
}
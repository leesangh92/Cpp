#include <iostream>

using namespace std;

#include "NameSP.h"


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
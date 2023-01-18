#include <iostream>

using namespace std;

#include "NameSP.h"

using namespace BestCom;
using namespace ProgCom;

int main()
{
	// :: => 범위 지정 연산자
	//BestCom::simpleFunc();
	//BestCom::ShowMsg();

	BestCom::simpleFunc();
	ProgCom::simpleFunc();

	ShowMsg();

	cout << "End. \n";

	return 0;
}
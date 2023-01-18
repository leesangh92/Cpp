#include <iostream>

using namespace std;

/*
판매금액을 입력받아 급여를 계산하는 프로그램을 작성한다.(급여계산은 반복되며 -1이면 종료한다.)
1. 급여입력은 main()
2. 급여계산은 CalSalary() 함수에서 계산하여 반환
기본금 100만원
인센티브는 판매금액의 12%
급여는 기본급 + 인센티브
*/

// 함수 선언문이 없다면 main()함수에서 본 함수를 인식하지 못한다. 
int CalSalary(int sales) // C 언어는 함수 선언을 생략할 수 있지만 객체지향 프로그래밍 언어에서는 함수 선언을 생략할 수 없다!!!
{
	return (int)(100 + sales * 0.12);
}

int main()
{
	int sales;

	while (1)
	{
		cout << "판매금액 : ";
		cin >> sales; // 100, 

		if (sales == -1)
			break;

		cout << "이번 달 급여 : " << CalSalary(sales) << "만원 \n";
	}

	cout << "프로그램 종료." << endl;
	
	return 0;
}

int CalSalary(int sales) // C++ 에서는 함수 선언을 반드시 해주어야 한다. 
{
	return (int)(100 + sales * 0.12);
}
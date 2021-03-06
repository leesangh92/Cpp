#include <iostream>

using namespace std;

int Add(int num1 = 1, int num2 = 1) // 디폴트인자
{
	return num1 + num2;
}

//int Add(int num1 = 1, int num2) 
// 디폴트인자는 없어도 되는 것이지만 값이 모자라게 입력되었을 때 
// 앞에서 순차적으로 입력된 인자를 사용하기 때문에 
// 부족한 인자에 디폴트인자를 사용할 수 있도록 뒤에서부터 채워넣는다. 
//{
//	return num1 + num2;
//}

int Sub(int num1 = 1, int num2 = 1); // 메서드 선언문
// 디폴트인자 값은 반드시 선언부에'만' 둔다!!! 실행부에 두지 않는다. 

int main()
{
	cout << Add() << endl;
	cout << Add(10) << endl;
	cout << Add(10, 20) << endl;

	cout << Sub() << endl;
	cout << Sub(10) << endl;
	cout << Sub(10, 20) << endl;

	return 0;
}

int Sub(int num1, int num2) // 디폴트인자 값은 반드시 선언부에'만' 둔다!!! 실행부에 두지 않는다. 
{
	return num1 - num2;
}
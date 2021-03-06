#include <iostream>

using namespace std;

int main()
{
	int salary = 3800000;

	   //참조자명   //참조할 변수
	int& r_salary = salary; // 참조자 : 선언문에서 자료형과 &로 선언
	cout << salary << ", " << r_salary << endl;

	r_salary += 200000;
	cout << salary << ", " << r_salary << endl;
	cout << &salary << ", " << &r_salary << endl;

	int* p1 = &salary;
	cout << *p1 << ", " << &p1 << ", " << p1 << endl;

	//int& n1; // 참조자는 반드시 선언과 동시에 초기화해야한다.
	//int& n2 = 100;// 참조자는 lvalue(이름이 부여된 공간. ex)변수)만 참조한다. 
	const int& n3 = 100; // 상수도 참조할 수 있다.

	return 0;
}
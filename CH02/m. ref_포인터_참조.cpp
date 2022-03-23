#include <iostream>

using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr; // 단일 포인터 참조
	int**(&dpref) = dptr; // 이중 포인터 참조

	cout << "num : " << num << ", ref : " << ref << endl;
	cout << "*ptr : " << *ptr << ", *pref : " << *pref << endl;
	cout << "**dptr : " << **dptr << ", **dpref : " << **dpref << endl;

	//char* str = "kingdom"; // 오류
	const char* str = "kingdom"; // "kingdom"은 문자열 상수로 변경이 불가능하다는 것을 const로 명시한다. 
	const char* (&strRef) = str;
	cout << "str : " << str << ", strRef : " << strRef << endl;

	return 0;
}
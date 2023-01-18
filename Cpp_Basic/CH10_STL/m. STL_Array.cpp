#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

void funcA(array<int, 10> tmp)
{
	cout << sizeof(tmp) << ", " << tmp.size() << endl;
}

int main()
{
	array <int, 10> arr1 = { 10, 20, 30, 40, 50, 60, 70 };

	cout << "arr1.size() : " << arr1.size() << endl;

	for (int i = 0; i < arr1.size(); i++)
		cout << arr1[i] << ", ";
	cout << endl;

	cout << "arr1.at(0) : " << arr1.at(0) << endl;
	cout << "arr1.at(1) : " << arr1.at(1) << endl;
	//cout << "arr1.at(15) : " << arr1.at(15) << endl; // abort() 함수 호출됨

	cout << "arr1[0] : " << arr1.at(0) << endl;
	//cout << "arr1[15] : " << arr1.at(15) << endl; // ouf of range // 런타임 오류
	cout << "arr1[2] : " << arr1.at(2) << endl;

	cout << "==============================" << endl;

	cout << "배열주소" << endl;
	cout << "arr1.data() : " << arr1.data() << endl; // 배열의 시작 주소
	cout << "*(arr1.data()) : " << *(arr1.data()) << endl; // 배열의 시작 주소에 있는 값
	cout << "*(arr1.data()+1) : " << *(arr1.data()+1) << endl;
	cout << "*(arr1.data()+2) : " << *(arr1.data()+2) << endl;

	cout << "arr1.front() : " << arr1.front() << endl; // 배열의 가장 첫번째에 있는 값
	cout << "arr1.back() : " << arr1.back() << endl; // 배열의 가장 마지막에 있는 값

	cout << "==============================" << endl;

	array<int, 10> ::iterator it;

	arr1.fill(0); // 배열 내용을 0으로 채움

	for (it = arr1.begin(); it != arr1.end(); it++)
		cout << *it << ", ";
	cout << endl;
	
	cout << "==============================" << endl;

	array<string, 3> arr2 = { "사과", "바나나", "포도" };
	array<string, 3> arr3 = { "apple", "banana", "grape" };

	arr2.swap(arr3);
	for (int i = 0; i < arr2.size(); i++)
		cout << arr2[i] << ", ";
	cout << endl;

	cout << "==============================" << endl;

	cout << sizeof(arr1) << ", " << sizeof(arr1[0]) << endl;

	funcA(arr1);
	
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num = 10;
	float fnum = 1.5;

	// 들어온 값의 자료형을 추정
	auto ch = 'A';
	auto pi = 3.14159;

	auto ten = 10;
	auto* p = &ten;

	cout << "typeid(num).name() : " << typeid(num).name()
		<< ", typeid(fnum).name() : " << typeid(fnum).name() << endl; // name : 자료형을 보여주는 메서드

	cout << "typeid(ch).name() : " << typeid(ch).name() << endl;
	cout << "typeid(pi).name() : " << typeid(pi).name() << endl;

	cout << "*p : " << *p << endl;
	cout << "typeid(p).name() : " << typeid(p).name() << endl;

	cout << "==============================" << endl;

	vector<int> v = { 1, 2, 3, 4, 5 };

	vector<int> ::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << ", ";
	cout << endl;

	vector<string> v2 = { "kim", "lee", "han", "park" };
	for (auto it2 = v.begin(); it2 != v.end(); it2++)
		cout << *it2 << ", ";
	cout << endl;

	return 0;
}
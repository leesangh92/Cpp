#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
	list<int> intList;
	list<int> ::iterator it;

	for (int i = 0; i < 10; i++)
		intList.push_back(i + 10);

	for (it = intList.begin(); it != intList.end(); it++)
		cout << *it << ", ";
	cout << endl;
	
	cout << "intList.size() : " << intList.size() << endl; // 사이즈는 있지만 이를 통해서 원소에 접근할 수는 없다. 

	/*for (int i = 0; i < intList.size(); i++)
		cout << intList[i] << endl;*/

	intList.remove(15); // 값을 찾아서 삭제

	for (it = intList.begin(); it != intList.end(); it++)
		cout << *it << ", ";
	cout << endl;

	intList.push_back(100);
	intList.push_back(200);
	intList.push_front(300);

	for (it = intList.begin(); it != intList.end(); it++)
		cout << *it << ", ";
	cout << endl;

	it = intList.begin();
	it++;
	it++;
	it = intList.erase(it); // 현재 위치에 있는 값 삭제

	for (it = intList.begin(); it != intList.end(); it++)
		cout << *it << ", ";
	cout << endl;

	it = intList.begin();
	it++;
	it++;
	it = intList.insert(it, 500); // 현재 위치에 값 삽입

	for (it = intList.begin(); it != intList.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==============================" << endl;

	list<string> strList;

	strList.push_back("서울시");
	strList.push_back("부산시");
	strList.push_back("대전시");
	strList.push_back("울산시");

	list<string> ::iterator it2;

	for (it2 = strList.begin(); it2 != strList.end(); it2++)
		cout << *it2 << ", ";
	cout << endl;

	return 0;
}
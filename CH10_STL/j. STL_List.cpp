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
	
	cout << "intList.size() : " << intList.size() << endl; // ������� ������ �̸� ���ؼ� ���ҿ� ������ ���� ����. 

	/*for (int i = 0; i < intList.size(); i++)
		cout << intList[i] << endl;*/

	intList.remove(15); // ���� ã�Ƽ� ����

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
	it = intList.erase(it); // ���� ��ġ�� �ִ� �� ����

	for (it = intList.begin(); it != intList.end(); it++)
		cout << *it << ", ";
	cout << endl;

	it = intList.begin();
	it++;
	it++;
	it = intList.insert(it, 500); // ���� ��ġ�� �� ����

	for (it = intList.begin(); it != intList.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==============================" << endl;

	list<string> strList;

	strList.push_back("�����");
	strList.push_back("�λ��");
	strList.push_back("������");
	strList.push_back("����");

	list<string> ::iterator it2;

	for (it2 = strList.begin(); it2 != strList.end(); it2++)
		cout << *it2 << ", ";
	cout << endl;

	return 0;
}
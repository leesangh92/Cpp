#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	char _name[20]; // 20byte �̸��� ���ڿ� ����

	string name; // ���ڿ� �ϳ� ����, ũ�� ������ ����.
	//string name2[20]; // ���ڿ� 20�� ����
	string comAddr;

	cout << "���� ? : ";
	cin >> name;
	cin.ignore(100, '\n');

	cout << "ȸ���ּ� ? : ";
	getline(cin, comAddr); // getline : ������ �����ϴ� ������ �Է¹ޱ�

	cout << name << ", " << comAddr << endl;

	transform(name.begin(), name.end(), name.begin(), ::toupper);
	//transform(name.begin(), name.end(), name.begin()) ::tolower);

	cout << name << ", " << comAddr << endl;

	if (name == "KIM")
		cout << "Equal." << endl;
	else
		cout << "Not Equal." << endl;

	return 0;
}
#include <iostream>
#include <cstring> // C++ ��Ģ : C ������� ��� �� Ȯ���� h �� ������ ������ϸ� �տ� c �� �߰��Ѵ�.

using namespace std;

int main()
{
	char name[20]; // 20 byte �̸��� ���ڿ� ����(���ڿ� �ϳ� ����)
	char comAddr[50];

	cout << "���� ? : "; //kim
	cin >> name; // ���� ����� ���� �ʴ´�. 
	cin.ignore(100, '\n');

	cout << "ȸ���ּ� ? : "; //SEOUL �����
	cin.getline(comAddr, 50); // ��ü�̸�.�޼���(�Լ�) // ������ �����ϴ� ������
	//cin.getline(comAddr, 50, '\n'); // 50 byte �Է� �� 
	//cin.getline(comAddr, 50, '.'); // ���� ���� '.', '.' ���ڸ� ���������� �Է��� �ް� ����Ѵ�. 

	cout << name << ", " << comAddr << endl;



	cout << "strupr(name) : " << strupr(name) << endl; // ��� ���ڸ� �빮�ڷ�(toupper)
	cout << "strlwr(comAddr) : " << strlwr(comAddr) << endl; // ��� ���ڸ� �ҹ��ڷ�(tolower)



	if (strcmp(name, "KIM") == 0)
		cout << "Equal." << endl;
	else
		cout << "Not Equal." << endl;



	return 0;
}
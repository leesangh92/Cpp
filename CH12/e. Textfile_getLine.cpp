#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const char* file = "C:\\windows\\system.ini";
	ifstream fin(file, ios::in);

	if (!fin)
	{
		cout << "C:\\windows\\system.ini ���� ���� ���� !!!" << endl;
		return -1;
	}

	char buffer[100];

	// �б⸦ �����ϸ� true ��ȯ
	while (fin.getline(buffer, 100)) // fin���� 100��ŭ �о buffer�� ���� // ���� �迭
	{
		cout << buffer << endl;
	}
	fin.close();

	cout << "====================\n";

	const char* file2 = "student.txt";
	ifstream fin2(file2, ios::in);

	if (!fin2)
	{
		cout << "���� ���� ���� !!!" << endl;
		return -1;
	}

	string line;

	while (getline(fin2, line)) // fin(��Ʈ��)���� �б�
	{
		cout << line << endl;
	}
	fin2.close();

	return 0;
}
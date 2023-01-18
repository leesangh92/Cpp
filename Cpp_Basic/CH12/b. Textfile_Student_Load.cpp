#include <iostream>

#include <fstream>

using namespace std;

int main()
{
	char name[20], dept[30];
	int sid;

	ifstream fin;
	fin.open("student.txt", ios::in); // 파일 모드

	if (!fin)
	{
		cout << "파일 열기 실패 !!!";
		return -1;
	}

	fin >> sid;
	fin >> name;
	fin >> dept;

	fin.close();

	cout << sid << ", " << name << ", " << dept << endl;

	return 0;
}
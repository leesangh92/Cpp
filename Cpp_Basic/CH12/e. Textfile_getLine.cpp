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
		cout << "C:\\windows\\system.ini 파일 열기 실패 !!!" << endl;
		return -1;
	}

	char buffer[100];

	// 읽기를 성공하면 true 반환
	while (fin.getline(buffer, 100)) // fin에서 100만큼 읽어서 buffer에 저장 // 문자 배열
	{
		cout << buffer << endl;
	}
	fin.close();

	cout << "====================\n";

	const char* file2 = "student.txt";
	ifstream fin2(file2, ios::in);

	if (!fin2)
	{
		cout << "파일 열기 실패 !!!" << endl;
		return -1;
	}

	string line;

	while (getline(fin2, line)) // fin(스트림)에서 읽기
	{
		cout << line << endl;
	}
	fin2.close();

	return 0;
}
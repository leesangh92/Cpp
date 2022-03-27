#include <iostream>

#include <fstream>

using namespace std;

int main()
{
	char name[20], dept[30];
	int sid;

	cout << "성명 ? ";
	cin >> name;

	cout << "학번(숫자) ? ";
	cin >> sid;

	cout << "학과 ? ";
	cin >> dept;

	/*ofstream fout;
	fout.open("student.txt");*/
	ofstream fout("student.txt");

	if (!fout) // 열기에 성공하면 true
	{
		cout << "파일 열기 실패 !!!" << endl;
		return -1;
	}

	fout << sid << endl;
	fout << name << endl;
	fout << dept << endl;

	fout.close();

	cout << "student.txt Save." << endl;

	return 0;
}

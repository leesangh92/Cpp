#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//const char* file = "C:\\windows\\system.ini";
	const char* file = "student.txt";
	ifstream fin(file, ios::in);

	if (!fin)
	{
		cout << "���� ���� ���� !!!" << endl;
		return -1;
	}

	char ch;
	int cn = 0;

	while((ch = fin.get()) != EOF) // ������ ���������� EOF�� �ִ�.
	{
		cout << ch;
		cn++;
	}
	cout << "\n���� ����Ʈ �� : " << cn << endl;
	fin.close();

	return 0;
}
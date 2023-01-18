#include <iostream>
#include <fstream>

using namespace std;

// "C:\\windows\\system.ini" ������ "student.txt"�� �߰��Ͻÿ�.

int main()
{
	/*const char* file1 = "C:\\windows\\system.ini";
	const char* file2 = "student.txt";

	ifstream fin(file1, ios::in);
	if (!fin)
	{
		cout << "C:\\windows\\system.ini ���� ���� ���� !!!" << endl;
		return -1;
	}

	ofstream fout(file2, ios::out | ios::app);
	if (!fout)
	{
		cout << "student.txt ���� ���� ���� !!!" << endl;
		return -1;
	}*/

	const char* file1 = "student.txt";
	const char* file2 = "student.bak";

	//ifstream fin(file1, ios::in);
	fstream fin(file1);
	if (!fin)
	{
		cout << "student.txt ���� ���� ���� !!!" << endl;
		return -1;
	}

	//ofstream fout(file2, ios::out | ios::app);
	ofstream fout(file2);
	if (!fout)
	{
		cout << "���� ���� ���� !!!" << endl;
		return -1;
	}

	char ch;

	while ((ch = fin.get()) != EOF)
	{
		fout.put(ch);
	}
	fin.close();

	cout << "���� �߰� !!!" << endl;

	return 0;
}
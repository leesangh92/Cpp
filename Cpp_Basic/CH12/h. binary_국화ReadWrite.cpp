#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const char* sour = "��ȭ.jpg";
	const char* dest = "��ȭcopy2.jpg";

	ifstream fin(sour, ios::in | ios::binary);
	if (!fin)
	{
		cout << "��ȭ.jpg ���� ���� ���� !!!" << endl;
		return -1;
	}

	ofstream fout(dest, ios::out | ios::binary);
	if (!fout)
	{
		cout << "��ȭcopy2.jpg ���� ���� ���� !!!" << endl;
		return -1;
	}

	char buffer[1024];

	while (!fin.eof())
	{
		fin.read(buffer, 1024);
		int n = fin.gcount();
		fout.write(buffer, n);

		/*buffer[n - 1] = '\0';
		cout << buffer << endl;*/
	}

	fin.close();
	fout.close();

	cout << "���� ���� ���� �Ϸ� !!!" << endl;

	return 0;
}
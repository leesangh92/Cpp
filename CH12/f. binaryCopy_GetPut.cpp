#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const char* sour = "��ȭ.jpg";
	const char* dest = "��ȭcopy.jpg";

	ifstream fin(sour, ios::in | ios::binary);
	if (!fin)
	{
		cout << "��ȭ.jpg ���� ���� ���� !!!" << endl;
		return -1;
	}

	ofstream fout(dest, ios::out | ios::binary);
	if (!fout)
	{
		cout << "��ȭcopy.jpg ���� ���� ���� !!!" << endl;
		return -1;
	}

	int ch; // ������ Ÿ���� ����

	while ((ch = fin.get()) != EOF)
	{
		fout.put(ch);
	}
	fin.close();
	fout.close();

	cout << "���� ���� ���� �Ϸ� !!!" << endl;

	return 0;
}
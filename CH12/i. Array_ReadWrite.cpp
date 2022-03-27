#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int num[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }, tnum[10];
	double dnum[5] = { 1.1, 2.1, 3.1, 4.1, 5.1 }, tdnum[5];
	char msg[30] = "Multi Campus.", tmsg[30];

	//���ϸ� array.dat(��������) ���� ���� �� ������ ���� tnum, tdnum, tmsg�� �ε�
	//�ε�� �迭 ���

	// 1. ��Ʈ�� ����
	ofstream fout("array.dat", ios::out | ios::binary);
	if (!fout)
	{
		cout << "array.dat ���� ���� ���� !!!" << endl;
		return -1;
	}

	// 2. ���� ���� save
	//ostream& write (const char *s, streamsize n); // ostream write �Լ� ����
	fout.write((char*)num, sizeof(num));
	fout.write((char*)dnum, sizeof(dnum));
	fout.write(msg, sizeof(msg));

	fout.close();

	// 3. ���� ���� load

	ifstream fin("array.dat", ios::in | ios::binary);
	if (!fout)
	{
		cout << "array.dat ���� ���� ���� !!!" << endl;
		return -1;
	}

	fin.read((char*)tnum, sizeof(tnum));
	fin.read((char*)dnum, sizeof(dnum));
	fin.read(tmsg, sizeof(tmsg));

	fin.close();

	// 4. �迭 ���
	for (int i = 0; i < 10; i++)
		cout << tnum[i] << ", ";
	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << dnum[i] << ", ";
	cout << endl;
	cout << "tmsg : " << tmsg;

	return 0;
}
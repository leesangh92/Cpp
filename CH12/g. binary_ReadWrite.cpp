#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const char* file = "C:\\windows\\system.ini";

	ifstream fin(file, ios::binary);
	if (!fin)
	{
		cout << "C:\\windows\\system.ini ���� ���� ���� !!!" << endl;
		return -1;
	}

	int count = 0;
	char buf[100];

	while (!fin.eof()) // ���� ���̸� true ��ȯ
	{
		fin.read(buf, 100); // get���� ������ ���� �ϳ��ϳ� �����Ƿ� read�� ������ ������
		int n = fin.gcount();
		cout.write(buf, n); // put���� ����ϸ� ���� �ϳ��ϳ� ����ϹǷ� write�� ����ϸ� ������
		
		/*buf[n - 1] = '\0';
		cout << buf << endl;*/

		count += n;
	}

	cout << "���� ����Ʈ �� : " << count << endl;
	fin.close();

	return 0;
}
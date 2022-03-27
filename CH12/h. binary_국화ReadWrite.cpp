#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const char* sour = "국화.jpg";
	const char* dest = "국화copy2.jpg";

	ifstream fin(sour, ios::in | ios::binary);
	if (!fin)
	{
		cout << "국화.jpg 파일 열기 실패 !!!" << endl;
		return -1;
	}

	ofstream fout(dest, ios::out | ios::binary);
	if (!fout)
	{
		cout << "국화copy2.jpg 파일 열기 실패 !!!" << endl;
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

	cout << "이진 파일 복사 완료 !!!" << endl;

	return 0;
}
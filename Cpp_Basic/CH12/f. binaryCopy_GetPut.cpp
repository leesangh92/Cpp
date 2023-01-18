#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const char* sour = "국화.jpg";
	const char* dest = "국화copy.jpg";

	ifstream fin(sour, ios::in | ios::binary);
	if (!fin)
	{
		cout << "국화.jpg 파일 열기 실패 !!!" << endl;
		return -1;
	}

	ofstream fout(dest, ios::out | ios::binary);
	if (!fout)
	{
		cout << "국화copy.jpg 파일 열기 실패 !!!" << endl;
		return -1;
	}

	int ch; // 이진수 타입은 정수

	while ((ch = fin.get()) != EOF)
	{
		fout.put(ch);
	}
	fin.close();
	fout.close();

	cout << "이진 파일 복사 완료 !!!" << endl;

	return 0;
}
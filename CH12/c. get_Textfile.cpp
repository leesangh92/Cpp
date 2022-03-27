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
		cout << "파일 열기 실패 !!!" << endl;
		return -1;
	}

	char ch;
	int cn = 0;

	while((ch = fin.get()) != EOF) // 파일의 마지막에는 EOF가 있다.
	{
		cout << ch;
		cn++;
	}
	cout << "\n읽은 바이트 수 : " << cn << endl;
	fin.close();

	return 0;
}
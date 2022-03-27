#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const char* file = "C:\\windows\\system.ini";

	ifstream fin(file, ios::binary);
	if (!fin)
	{
		cout << "C:\\windows\\system.ini 파일 열기 실패 !!!" << endl;
		return -1;
	}

	int count = 0;
	char buf[100];

	while (!fin.eof()) // 파일 끝이면 true 반환
	{
		fin.read(buf, 100); // get으로 읽으면 문자 하나하나 읽으므로 read로 읽으면 빠르다
		int n = fin.gcount();
		cout.write(buf, n); // put으로 출력하면 문자 하나하나 출력하므로 write로 출력하면 빠르다
		
		/*buf[n - 1] = '\0';
		cout << buf << endl;*/

		count += n;
	}

	cout << "읽은 바이트 수 : " << count << endl;
	fin.close();

	return 0;
}
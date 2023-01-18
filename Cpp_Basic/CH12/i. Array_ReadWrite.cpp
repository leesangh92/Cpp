#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int num[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }, tnum[10];
	double dnum[5] = { 1.1, 2.1, 3.1, 4.1, 5.1 }, tdnum[5];
	char msg[30] = "Multi Campus.", tmsg[30];

	//파일명 array.dat(이진파일) 으로 저장 후 파일을 열어 tnum, tdnum, tmsg에 로드
	//로드된 배열 출력

	// 1. 스트림 연결
	ofstream fout("array.dat", ios::out | ios::binary);
	if (!fout)
	{
		cout << "array.dat 파일 열기 실패 !!!" << endl;
		return -1;
	}

	// 2. 이진 파일 save
	//ostream& write (const char *s, streamsize n); // ostream write 함수 원형
	fout.write((char*)num, sizeof(num));
	fout.write((char*)dnum, sizeof(dnum));
	fout.write(msg, sizeof(msg));

	fout.close();

	// 3. 이진 파일 load

	ifstream fin("array.dat", ios::in | ios::binary);
	if (!fout)
	{
		cout << "array.dat 파일 열기 실패 !!!" << endl;
		return -1;
	}

	fin.read((char*)tnum, sizeof(tnum));
	fin.read((char*)dnum, sizeof(dnum));
	fin.read(tmsg, sizeof(tmsg));

	fin.close();

	// 4. 배열 출력
	for (int i = 0; i < 10; i++)
		cout << tnum[i] << ", ";
	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << dnum[i] << ", ";
	cout << endl;
	cout << "tmsg : " << tmsg;

	return 0;
}
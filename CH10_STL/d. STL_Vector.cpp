#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Vector는 동적 배열 구조이다. (마지막에 추가/삭제할 때)

int main()
{
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(10);
	v.push_back(4);
	v.push_back(50);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	cout << "====================" << endl;

	v[0] = 10; // 0열의 값을 10으로
	int num = v[2];
	v.at(3) = 3; // 3열의 값을 3으로 // at메서드 : 범위 검사

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	cout << "v.size() : " << v.size() << endl; // 실제 유효한 배열요소의 크기
	cout << "v.capacity() : " << v.capacity() << endl; // 벡터용량 : 메모리가 할당되어 있는 공간

	cout << "====================" << endl;

	vector<int> ::iterator it;

	it = v.begin();
	v.erase(it); // 현재 위치 삭제

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;

	v.pop_back(); // 마지막 항목 삭제
	v.pop_back();

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;

	v.shrink_to_fit(); // capacity 크기 재조정

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	v.resize(10); // 벡터 크기 변경, 변경된 크기에 값은 0으로 채워진다.

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;


	return 0;
}
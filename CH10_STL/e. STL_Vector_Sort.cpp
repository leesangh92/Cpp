#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Vector는 동적 배열 구조이다(마지막에 추가/삭제할 떄)

int main()
{
	vector<char> vec;
	vector<char> ::iterator it;

	vec.push_back(65);
	vec.push_back('B');
	vec.push_back('a');
	vec.push_back('D');
	vec.push_back('z');

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << ", ";
	cout << endl;

	sort(vec.begin(), vec.end()); // 오름차순 정렬
	//sort(vec.begin(), vec.end(), less<char>()); // Default

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << ", ";
	cout << endl;

	sort(vec.begin(), vec.end(), greater<char>()); // 내림차순 정렬

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << ", ";
	cout << endl;

	cout << "==============================" << endl;

	char arr[5] = { 'D', 'a', 'f', 'Z', 'A' };
	sort(arr, arr + 5); // 일반배열도 sorting 가능

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	sort(arr, arr + 5, greater<char>());

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	//arr[5] = 'K'; // 범위 검사 // 이미 arr배열은 가득 참

	return 0;
}
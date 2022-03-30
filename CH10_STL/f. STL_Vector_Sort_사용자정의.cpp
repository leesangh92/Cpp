#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(int a, int b)
{
	// return a < b; // 오름차순
	return a > b; // 내림차순
}

bool compare2(string a, string b)
{
	//return a.size() < b.size(); // 짧은 순서
	return a.size() > b.size(); // 긴 순서
}

int main()
{
	vector<char> v;
	vector<char> ::iterator it;

	v.push_back(65);
	v.push_back('B');
	v.push_back('a');
	v.push_back('D');
	v.push_back('z');

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	sort(v.begin(), v.end(), compare);

	it = v.begin();
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==============================" << endl;

	vector<string> v2;
	string strArr[] = { "watermelon", "peach", "apple", "banana", "blueberry", "grape" };

	v2.assign(strArr, strArr + 6); // assign : 벡터에 새로운 내용을 대입

	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << ", ";
	cout << endl;

	sort(v2.begin(), v2.end()); // 문자열은 ASCII 코드순으로 정렬

	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << ", ";
	cout << endl;

	sort(v2.begin(), v2.end(), compare2); // 문자열 길이 정렬(사용자 정의 정렬)

	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << ", ";
	cout << endl;

	return 0;
}
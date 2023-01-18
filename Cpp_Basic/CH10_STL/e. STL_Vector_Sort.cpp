#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Vector�� ���� �迭 �����̴�(�������� �߰�/������ ��)

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

	sort(vec.begin(), vec.end()); // �������� ����
	//sort(vec.begin(), vec.end(), less<char>()); // Default

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << ", ";
	cout << endl;

	sort(vec.begin(), vec.end(), greater<char>()); // �������� ����

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << ", ";
	cout << endl;

	cout << "==============================" << endl;

	char arr[5] = { 'D', 'a', 'f', 'Z', 'A' };
	sort(arr, arr + 5); // �Ϲݹ迭�� sorting ����

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

	//arr[5] = 'K'; // ���� �˻� // �̹� arr�迭�� ���� ��

	return 0;
}
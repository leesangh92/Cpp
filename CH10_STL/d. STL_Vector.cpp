#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Vector�� ���� �迭 �����̴�. (�������� �߰�/������ ��)

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

	v[0] = 10; // 0���� ���� 10����
	int num = v[2];
	v.at(3) = 3; // 3���� ���� 3���� // at�޼��� : ���� �˻�

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	cout << "v.size() : " << v.size() << endl; // ���� ��ȿ�� �迭����� ũ��
	cout << "v.capacity() : " << v.capacity() << endl; // ���Ϳ뷮 : �޸𸮰� �Ҵ�Ǿ� �ִ� ����

	cout << "====================" << endl;

	vector<int> ::iterator it;

	it = v.begin();
	v.erase(it); // ���� ��ġ ����

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;

	v.pop_back(); // ������ �׸� ����
	v.pop_back();

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;

	v.shrink_to_fit(); // capacity ũ�� ������

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	v.resize(10); // ���� ũ�� ����, ����� ũ�⿡ ���� 0���� ä������.

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	cout << "v.size() : " << v.size() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;


	return 0;
}
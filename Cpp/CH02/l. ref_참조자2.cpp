#include <iostream>

using namespace std;

int Add1(int x, int y)
{
	return x + y;
}

//int Add1(const int& x, const int& y) // ������ �����θ� ����� ��
//{
//	return x + y;
//}

int Add2(const int &x, const int &y)
{
	return x + y;
}

int main()
{
	const int N = 100 + 200;
	const int& ref_N = 100 + 200; // �ӽ� ������ �Ҵ��Ͽ� ����

	//����� �����ϴ� ����
	int n1 = 100, n2 = 200;

	int ret1 = Add1(n1, n2); // �޸𸮸� �Ҵ�(���� ����)�Ѵ�. 
	cout << "Add1(n1, n2) : " << ret1 << endl;

	int ret2 = Add2(100, 200); // �޸𸮸� �Ҵ����� �ʴ´�.
	cout << "Add2(100, 200) : " << ret2 << endl;

	return 0;
}
#include <iostream>

using namespace std;

class Counter
{
private: // ���� ���ٸ��� ���. ����Ʈ�� private.
	int value2 = 100; // ���� �ʱ�ȭ�� ���� ���� �ʴ´�. 
public: // ��� �ܺ� ������ ���.
	int value;
	void InCrement()
	{
		value++; // ���� ����
		value2++; // ���� ����
	}
	int GetValue() // private ����� ���� ������ ���� �޼��� �Լ��� ���� ����� �־�� �Ѵ�. 
	{
		return value2; // ���� ����
	}
};

int main()
{
	Counter cnt;

	cnt.value = 1; // �ܺ� ���� : Ŭ���� �ۿ��� ����
	cnt.InCrement(); // �ܺ� ����
	                        // �ܺ� ����
	cout << "cnt.value : " << cnt.value << endl;

	//cout << "cnt.value2 : " << cnt.value2 << endl;
	cout << "cnt.value2 : " << cnt.GetValue() << endl;

	return 0;
}
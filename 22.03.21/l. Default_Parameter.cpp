#include <iostream>

using namespace std;

int BoxVolume(int length = 1, int width = 1, int height = 1); // ����Ʈ ���ڴ� ����ο� ����ΰ� �������� �ִٸ� ����ο��� ����Ѵ�!!!

int main()
{
	cout << "BoxVolume(3, 3, 3) : " << BoxVolume(3, 3, 3) << endl;
	cout << "BoxVolume(5, 5) : " << BoxVolume(5, 5) << endl;
	cout << "BoxVolume(7) : " << BoxVolume(7) << endl;
	cout << "BoxVolume() : " << BoxVolume() << endl;

	return 0;
}

// ������ü ���� ���ϱ�
int BoxVolume(int length, int width, int height) // ����Ʈ ����(����Ʈ �Ű�����) = 1
{
	return length * width * height;
}

#include <iostream>

using namespace std;

/*
�Ǹűݾ��� �Է¹޾� �޿��� ����ϴ� ���α׷��� �ۼ��Ѵ�.(�޿������ �ݺ��Ǹ� -1�̸� �����Ѵ�.)
1. �޿��Է��� main()
2. �޿������ CalSalary() �Լ����� ����Ͽ� ��ȯ
�⺻�� 100����
�μ�Ƽ��� �Ǹűݾ��� 12%
�޿��� �⺻�� + �μ�Ƽ��
*/

// �Լ� ������ ���ٸ� main()�Լ����� �� �Լ��� �ν����� ���Ѵ�. 
int CalSalary(int sales) // C ���� �Լ� ������ ������ �� ������ ��ü���� ���α׷��� ������ �Լ� ������ ������ �� ����!!!
{
	return (int)(100 + sales * 0.12);
}

int main()
{
	int sales;

	while (1)
	{
		cout << "�Ǹűݾ� : ";
		cin >> sales; // 100, 

		if (sales == -1)
			break;

		cout << "�̹� �� �޿� : " << CalSalary(sales) << "���� \n";
	}

	cout << "���α׷� ����." << endl;
	
	return 0;
}

int CalSalary(int sales) // C++ ������ �Լ� ������ �ݵ�� ���־�� �Ѵ�. 
{
	return (int)(100 + sales * 0.12);
}
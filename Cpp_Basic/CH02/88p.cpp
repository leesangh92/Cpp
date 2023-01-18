#include <iostream>

using namespace std;

/*
cout과 << 연산자를 이용하여 1에서 100까지 정수를 한줄에 10개씩 출력.
각 정수는 탭으로 분리해서 출력.
*/

//int main()
//{
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		cout << i << "\t";
//		if ((i % 10) == 0)
//		{
//			cout << "\n";
//		}
//	}
//	return 0;
//}

/*
cout과 << 연산자를 이용하여 구구단을 한줄에 10개씩 출력.
각 정수는 탭으로 분리해서 출력.
*/

//int main()
//{
//	int i, j, a;
//
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			a = i * j;
//			cout << i << "X" << j << "=" << a << "\t";
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}

/*
키보드로부터 두 개의 정수를 읽어 큰 수를 화면에 출력
*/

//int main()
//{
//	int a, b;
//
//	cout << "두 수를 입력하라. \n";
//	cout << "a : ";
//	cin >> a;
//	cout << "b : ";
//	cin >> b;
//
//	if (a > b)
//	{
//		cout << "큰 수 = " << a;
//	}
//	else
//		cout << "큰 수 = " << b;
//
//	return 0;
//}

/*
소수점을 가지는 5개의 실수를 입력받아 제일 큰 수를 화면에 출력
*/

/*
<Enter> 키가 입력될 때까지 문자들을 읽고, 입력된 문자 'x'의 개수를 화면에 출력
*/

//int main()
//{
//	char a[100];
//
//	cout << "문자들을 입력하라(100개 미만).\n";
//	cin.getline(a, 100);
//
//	int i, count=0;
//
//	for (i = 0; i < 100; i++)
//	{
//		if (a[i] == 'x')
//			count++;
//	}
//	cout << "x의 개수는 " << count;
//		
//	return 0;
//}


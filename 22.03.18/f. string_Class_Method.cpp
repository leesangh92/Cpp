#include <iostream>
#include <string>
using namespace std;

int main()
{
	char name[20]; // cin.getline(name, 20)
	string name2; // getline(cin, name)

	//문자열추가, 복사, 비교,

	string str1 = "I like ";
	string str2 = "C++ J++ C#";
	//string str2("C++ J++ C#"); // 이것도 가능

	int len = str1.length();
	cout << "str1 len : " << len << endl;

	//str1.assign("C++");  //기존내용지우고들어간다
	str1 = "C++";
	cout << "str1.assign(test) : " << str1 << endl;

	//str1.append(" Programming");
	str1 += " Programming";
	cout << "str1.append( 'Programming') : " << str1 << endl;

	//str1.clear();  //문자열지움
	//cout<<"str1.clear() : "<<str1<<endl;

	int n1 = str1.find("Prog");  //대소문자구분
	cout << "str1.find(Prog) : " << n1 << endl;

//str2
	cout << "str2:" << str2 << endl;
	str2.replace(4, 3, "java");  //J#변경
	cout << "str2.replace(4,3,'java') : " << str2 << endl;

	string str3 = str2.substr(0, 3);  //C++
	cout << "str2.substr(0,3) : " << str3 << endl;

	str3 = str2.substr(4, 4);  //java
	cout << "str2.substr(4,4) : " << str3 << endl;

	string s_num = "123";
	string s_fnum = "123.45";
	int num = stoi(s_num); // atoi()
	double dnum = stof(s_fnum); // atof()
	cout << typeid(num).name() << ", " << num << endl;
	cout << typeid(dnum).name() << ", " << dnum << endl;

	return 0;
}

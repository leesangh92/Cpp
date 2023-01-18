#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	map<string, string> dic;

	dic.insert(make_pair("love", "���"));
	dic.insert(make_pair("apple", "���"));
	dic["cherry"] = "ü��";
	dic.insert({ "cloud", "����" });

	map<string, string> ::iterator it;

	for (it = dic.begin(); it != dic.end(); it++)
		cout << it->first << ", " << it->second << endl;

	cout << "dic.size() : " << dic.size() << endl;

	string str;

	while (1)
	{
		cout << "�˻��� key ? (�˻� ���� : end) : ";
		getline(cin, str);

		if (str == "end")
			break;

		if (dic.find(str) == dic.end())
			cout << str << ", Not Found !!!" << endl;
		else
			cout << dic[str] << endl;
	}

	return 0;
}
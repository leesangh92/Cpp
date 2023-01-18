#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	map<string, string> dic;

	dic.insert(make_pair("love", "사랑"));
	dic.insert(make_pair("apple", "사과"));
	dic["cherry"] = "체리";
	dic.insert({ "cloud", "구름" });

	map<string, string> ::iterator it;

	for (it = dic.begin(); it != dic.end(); it++)
		cout << it->first << ", " << it->second << endl;

	cout << "dic.size() : " << dic.size() << endl;

	string str;

	while (1)
	{
		cout << "검색할 key ? (검색 종료 : end) : ";
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
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	//return a.second < b.second; //pair의 두 번째 인자 오름차순 정렬
	return a.second > b.second; //pair의 두 번째 인자 내림차순 정렬
}

int main()
{
	vector<pair<int, int>> v;

	v.push_back(make_pair(10, 20));
	v.push_back(make_pair(50, 40));
	v.push_back(make_pair(100, 70));
	v.push_back(make_pair(30, 20));

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << ", " << v[i].second << endl;

	cout << "==============================" << endl;

	vector<pair<int, int>> v2;

	v2.push_back(make_pair(1001, 3500000));
	v2.push_back(make_pair(1002, 2700000));
	v2.push_back(make_pair(1003, 3700000));
	v2.push_back(make_pair(1004, 5900000));
	v2.push_back(make_pair(1005, 2300000));

	sort(v2.begin(), v2.end(), compare);

	for (int i = 0; i < v2.size(); i++)
		cout << v2[i].first << ", " << v2[i].second << endl;

	return 0;
}
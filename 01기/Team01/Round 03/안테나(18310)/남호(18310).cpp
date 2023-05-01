#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cctype>
#include <queue>
#include <algorithm>
#define endl '\n'    // endl 대신 '\n'을 사용
using namespace std;




int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		v.push_back(m);
	}
	sort (v.begin(), v.end());
	int s = (n - 1) / 2;
	cout << v[s] << endl;



}

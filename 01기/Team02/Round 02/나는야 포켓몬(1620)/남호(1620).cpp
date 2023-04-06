#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cctype>
#define endl '\n'    // endl 대신 '\n'을 사용
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	int m;
	int number = 1;
	string name;
	
	cin >> n >> m;
	vector<string> v(n+1);
	map<string, int> map;

	for (int i = 1; i <= n; i++) {
		cin >> name;
		map[name] = i;
		v[i] = name;
		
	}
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		int s2;
		if (isdigit(s[0]) != 0) {
			s2 = stoi(s);
			cout << v[s2] << endl;

		}
		else {
			auto iter = map.find(s);
			cout << iter->second << endl;
		}

	}
}

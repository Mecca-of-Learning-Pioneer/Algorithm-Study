#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	map<int, int>mp;
	int n1, n2;
	int m1, m2;

	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cin >> n2;
		mp[n2]++;
	}
	cin >> m1;
	for (int i = 0; i < m1; i++) {
		cin >> m2;
		cout << mp[m2] << " ";
	}

}
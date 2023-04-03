#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	map<int, int> m;
	int v;
	int n;
	int s;
	int m2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		m[s]++;
	}
	cin >> v;
	for (int i = 0; i < v; i++) {
		cin >> m2;
		cout << m[m2] << " ";
		
	}
	
	//for(int i = 0; i < v; i++)
}
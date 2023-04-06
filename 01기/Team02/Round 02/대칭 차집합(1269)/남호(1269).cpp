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
	
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	map<int, int> mp1;
	
	/*시간초과 if문에서 map 한바퀴 돌아서 그런듯
	for(int i = 0; i < n+m; i++){
		int s;
		cin >> s;
		if (mp1.find(s) != mp1.end()) {
			mp1.erase(s);
		}
		else mp1[s] = 1;
		
	
	}
	*/
	for (int i = 0; i < n + m; i++) {
		int s;
		cin >> s;
		if (mp1[s] == 1) {
			mp1.erase(s);
		}
		else mp1[s] = 1;

	}
	cout << mp1.size();
	
	
}

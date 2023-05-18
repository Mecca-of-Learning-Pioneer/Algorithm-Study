#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cctype>
#include <queue>
#include <algorithm>
#include <stack>
#define endl '\n'    // endl 대신 '\n'을 사용
using namespace std;




int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	stack<int> st;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int m;
			cin >> m;
			st.push(m);
		}
		else if (s == "pop") {
			if (st.empty()) {
				cout << -1 << endl;
			}
			
			else {
				cout << st.top() << endl;
				st.pop();
			}
		}
		else if (s == "size") {
			cout << st.size() << endl;
		}
		else if (s == "empty") {
			if (st.empty()) {
				cout << 1 << endl;
			}
			else cout << 0 << endl;
		}
		else {
			if (st.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << st.top() << endl;
			}
		}

	}
    
}

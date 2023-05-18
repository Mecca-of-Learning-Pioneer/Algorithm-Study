#include<iostream>
#include<stack>
#define endl "\n"

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N = 0;
	cin >> N;

	stack<int> sta;

	for (int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int num;
			cin >> num;
			sta.push(num);
		}
		else if (cmd == "pop") {
			if (sta.empty() == true)
				cout << "-1" << endl;
			else {
				cout << sta.top() << endl;
				sta.pop();
			}

		}
		else if (cmd == "size") {
			cout << sta.size() << endl;
		}
		else if (cmd == "empty") {
			if (sta.empty() == true)
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (cmd == "top") {
			if (sta.size() == 0)
				cout << "-1" << endl;
			else
				cout << sta.top() << endl;
		}
	}
}

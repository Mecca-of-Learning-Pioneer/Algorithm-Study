#include<iostream>
#include<queue>
#define endl "\n"

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i ++ ) {
		queue<char> que;
		int count = 0;
		bool e = false;
		string str;
		cin >> str;
		int len = str.length();
		for (int j = 0; j < len; j++) {
			que.push(str[j]);
		}

		while (que.size() != 0) {
			if (que.front() == '(') {
				count++;
				que.pop();
			}
			else {
				count--;
				que.pop();
			}
			if (count < 0) {
				cout << "NO" << endl;
				e = true;
				break;
			}
		}

		if (count == 0)
			cout << "YES" << endl;
		if (!e && count != 0)
			cout << "NO" << endl;
	}
}

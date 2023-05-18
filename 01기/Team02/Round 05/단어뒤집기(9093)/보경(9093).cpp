#include<iostream>
#include<string>
#include<stack>
#define endl "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N = 0;
	cin >> N;
	cin.ignore();

	stack<char> sta;

	for (int i = 0; i < N; i++) {
		string str;
		getline(cin, str);
		str += ' ';
		int len = str.length();
		for (int j = 0; j < len; j++) {
			char word = str[j];
			if (word == ' ') {
				while (true) {
					if (sta.size() == 0) break;
					cout << sta.top();
					sta.pop();
				}
				cout << word;
			}
			else
				sta.push(word);
		}
		cout << endl;
	}

}

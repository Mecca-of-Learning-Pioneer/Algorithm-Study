#include<iostream>
#include<deque>
#include<string>
#define endl "\n"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		deque<int> deq;
		string cmd;
		string str;
		int count = 0;
		cin >> cmd >> count >> str;
		string word = "";
		for (int f = 0; f < str.length(); f++) {
			if (str[f] == '[')
				continue;
			else if (str[f] != ',' && str[f] != ']') {
				word += str[f];
			}
			else if (str[f] == ',' || str[f] == ']') {
				if (word.length() != 0) {
					deq.push_back(stoi(word));
					word = "";
				}
			}
		}

		bool qd = false;
		bool e = false;
		for (int j = 0; j < cmd.length(); j++) {
			if (cmd[j] == 'R') {
				if (qd == false)
					qd = true;
				else
					qd = false;
			}

			else if (cmd[j] == 'D') {
				if (deq.empty()) {
					e = true;
					break;
				}
				else {
					if (qd == false) {
						deq.pop_front();
					}
					else {
						deq.pop_back();
					}
				}
			}
		}

		if (e)
			cout << "error" << endl;
		else {
			if (qd == false) {
				cout << "[";
				while (deq.size() != 0) {
					cout << deq.front();
					if (deq.size() != 1)
						cout << ",";
					deq.pop_front();
				}
				cout << "]" << endl;
			}
			else {
				cout << "[";
				while (deq.size() != 0) {
					cout << deq.back();
					if (deq.size() != 1)
						cout << ",";
					deq.pop_back();
				}
				cout << "]" << endl;
			}
		}

	}

}

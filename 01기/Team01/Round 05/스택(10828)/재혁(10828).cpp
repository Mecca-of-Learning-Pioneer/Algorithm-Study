#include<iostream>
#include<string>
#include<stack>
#include<sstream>
#define endl '\n'
using namespace std;

stack<string> arr;

void Commend(string data) {
	if (isdigit(*--data.end()) != 0) {
		arr.push(data.substr(5));
		return;
	}

	switch (data[0])
	{
	case 'p':
		if (!arr.empty()) {
			cout << arr.top() << endl;
			arr.pop();
		}
		else {
			cout << -1 << endl;
		}
		break;

	case 's':
		cout << arr.size() << endl;
		break;

	case 'e':
		if (arr.empty())cout << 1 << endl;
		else cout << 0 << endl;
		break;

	case 't':
		if (!arr.empty()) {
			cout << arr.top() << endl;
		}
		else {
			cout << -1 << endl;
		}
		break;
	}


}


int main()
{
	int N;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++) {
		string cmd;
		getline(cin, cmd);
		Commend(cmd);
	}

	return 0;
}


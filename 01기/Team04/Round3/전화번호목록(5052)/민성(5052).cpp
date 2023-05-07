#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tc;
	string str;
	cin >> tc;

	while (tc--) {
		int n;
		cin >> n;
		vector<string> book;
		for (int i = 0; i < n; i++) {
			cin >> str;
			book.push_back(str);
		}
		/*�Է¹����� ���ڿ� ����̶�
		�������
		123 134 1234
		�����ϸ�
		123 1234 134�� ��*/
		sort(book.begin(), book.end());

		bool flag = false;
		for (int i = 0; i < n - 1; i++) {
			string a = book.at(i), b = book.at(i + 1);

			if (a.size() >= b.size()) continue;
			if (a == b.substr(0, a.size())) {
				cout << "NO" << "\n";
				flag = true;
				break;
			}
		}

		if (!flag) cout << "YES" << "\n";
	}

	return 0;
}
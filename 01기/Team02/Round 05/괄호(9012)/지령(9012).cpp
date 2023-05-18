#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	while (n > 0) {
		n--;
		string str1;
		cin >> str1;

		stack<char> st;
		string str2 = "YES";
		for (int i = 0; i < str1.length(); i++) {
			if (str1[i] == '(') {
				st.push(str1[i]);
			}
			else if (!st.empty() && str1[i] == ')' && st.top() == '(') {
				st.pop();
			}
			else {
				str2 = "NO";
				break;
			}
		if (!st.empty()) str2 = "NO";

		cout << str2 << endl;
	}
	return 0;
}
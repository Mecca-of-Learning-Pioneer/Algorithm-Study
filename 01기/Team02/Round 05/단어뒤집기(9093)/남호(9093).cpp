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
    cin.ignore();
    while (n--) {
        string s = "";
        getline(cin, s);
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << s[i];
            }
            else st.push(s[i]);

            if (i == s.size() - 1) {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
            }
        }
        cout << endl;
    }
}

#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl '\n'
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t) {
        int n; cin >> n;
        bool cons = false;

        vector<string> number;
        for (int i = 0; i < n; i++) {
            string tmp; cin >> tmp;
            number.push_back(tmp);
        }
        sort(number.begin(), number.end());

        vector<string>::iterator p = ++number.begin();
        for (auto iter = number.begin(); p != number.end(); iter++, p++) {
            if (iter->length() > p->length()) {
                continue;
            }
            if (*iter == p->substr(0, iter->length())) {
                cons = true;
                break;
            }
        }

        if (cons)cout << "NO\n";
        else cout << "YES\n";

        t--;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,t;

    cin >> t;
    while (t--) {
        string order,str;
        bool reverse=false, error=false;
        deque<int> dq;
        cin >> order;
        cin >> n;
        cin >> str;
        string s = "";
        for (int i = 0; i<str.length();i++) {

            if (isdigit(str[i])) {
                s += str[i];

            }
            else {
                if (!s.empty()) {
                    dq.push_back(stoi(s));
                    s = "";
                }
            }
        }
        for (auto o : order) {
            if (o == 'R') {
                if (reverse)
                    reverse = false;
                else
                    reverse = true;
            }
            else {
                if (dq.empty()) {
                    cout << "error" << '\n';
                    error = true;
                    break;
                }
                if (reverse)
                    dq.pop_back();
                else
                    dq.pop_front();
            }
        }
        if (!error) {
            cout << '[';
        }
        if (reverse && !dq.empty()) {
            for (auto o = dq.rbegin(); o != dq.rend(); o++) {
                if (o == dq.rend() - 1)
                    cout << *o;
                else
                cout << *o << ',';
            }
        }
        else if (!reverse&&!dq.empty()){
            for (auto o = dq.begin(); o != dq.end(); o++) {
                if (o == dq.end() - 1)
                    cout << *o;
                else
                cout << *o << ',';
            }
        }
        if(!error)
        cout <<"]\n";

    }
}

//런타임 에러
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {
    int n;
    string s;
    int m;
    cin >> n;
    while (n--) {
        s = "";
        deque <int> d;
        int reverse = 0;
        cin >> s;
        cin >> m;
        string s2;
        cin >> s2;
        string tmp = "";
        string s3 = "";
        if (m == 0 && s.find('d') != -1) {
            cout << "error" << '\n';
            continue;
        }
        if (m <= s.length()) {
            cout << "error" << '\n';
            continue;
        }
        for (int i = 0; i < s2.length(); i++) {

            if (i % 2 == 1) {
                tmp = s2[i];
                d.push_back(stoi(tmp));
                tmp = "";
            }
        }
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'R') {
                reverse++;
            }
            else {
                if (reverse % 2 == 0) {
                    d.pop_front();
                }
                else {
                    d.pop_back();
                }

            }
        }

        cout << '[';
        if (reverse % 2 == 0) {
            for (int i = 0; i < d.size(); i++) {
                if (i == d.size() - 1) {
                    cout << d[i];
                    break;
                }
                cout << d[i] << ',';

            }
        }
        else {
            for (int i = d.size() - 1; i >= 0; i--) {
                if (i == 0) {
                    cout << d[i];
                    break;
                }
                cout << d[i] << ',';
            }
        }
        cout << ']' << '\n';
    }

}

#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#define endl "\n"
using namespace std;

map <int, string> mp1;
map <string, int> mp2;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    string str;

    cin >> n >> m;


    for (int i = 1; i < n + 1; i++) {
        cin >> str;
        mp1[i] = str;
        mp2[str] = i;
    }

    for (int i = 0; i < m; i++) {
        cin >> str;
        // 숫자면
        if (isdigit(str[0]) != 0) {
            cout << mp1[stoi(str)] << endl;
        }
        // 숫자아니면
        else {
            cout << mp2[str] << endl;
        }
    }

    return 0;
}
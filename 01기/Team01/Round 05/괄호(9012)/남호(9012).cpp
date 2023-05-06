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
using namespace std;



int main() {
    
    int n;
    string str;
    char c;
    cin >> n;
    bool check = false;
    map<char, int> map;

    for (int i = 0; i < n; i++) {
        cin >> str;
        check = false;
        for (int j = 0; j < str.length(); j++) {
            c = str[j];
            map[c]++;
            if (map['('] < map[')']) {
                cout << "NO" << '\n'; 
                check = true;
                break;
            }
        }
        if (check) {
            map.clear();
            continue;
        }
        if (map['('] == map[')']) {
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';
        map.clear();
    }
   
}

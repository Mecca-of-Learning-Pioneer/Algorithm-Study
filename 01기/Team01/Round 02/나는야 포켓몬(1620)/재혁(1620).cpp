#include<iostream>
#include<map>
#include<cstring>
#include<cctype>
#define endl '\n'
using namespace std;

map<string, int> name;
map<int, string> number;

int search(string n) {
    auto iter = name.find(n);
    return iter->second;
}
string search(int n) {
    auto iter = number.find(n);
    return iter->second;
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        string tmp;
        cin >> tmp;
        name.insert({ tmp, i + 1 });
        number.insert({ i + 1, tmp });
    }

    for (int i = 0; i < n; i++) {
        string tmp; cin >> tmp;
        if (isdigit(tmp[0]) != 0) {
            int num = stoi(tmp);
            cout << search(num);
        }
        else {
            cout << search(tmp);
        }
        cout << endl;
    }
    return 0;
}
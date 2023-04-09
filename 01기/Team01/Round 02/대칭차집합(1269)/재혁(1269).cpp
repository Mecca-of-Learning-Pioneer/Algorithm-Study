#include<iostream>
#include<set>
#define endl '\n'

using namespace std;

set<int> arr;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        arr.insert(tmp);
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        if (arr.find(tmp) != arr.end()) {
            arr.erase(arr.find(tmp));
        }
        else {
            arr.insert(tmp);
        }
    }
    cout << arr.size();

    return 0;
}
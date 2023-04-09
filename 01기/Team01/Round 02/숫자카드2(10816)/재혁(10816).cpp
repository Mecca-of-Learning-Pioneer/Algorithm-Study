#include<iostream>
#include<map>
#define endl '\n'
using namespace std;

map<int, int> arr;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (arr.find(tmp) != arr.end()) {
            arr[tmp]++;
            continue;
        }
        arr.insert({ tmp, 1 });
    }

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int tmp; cin >> tmp;
        auto iter = arr.find(tmp);
        if (iter == arr.end()) {
            cout << 0 << " ";
            continue;
        }
        cout << iter->second << " ";

    }


    return 0;
}
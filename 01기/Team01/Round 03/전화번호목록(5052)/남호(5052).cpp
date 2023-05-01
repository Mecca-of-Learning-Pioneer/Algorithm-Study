#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<string> v(n); 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end()); 
        bool aa = true; 
        for (int i = 0; i < n - 1; i++) {
            string cur = v[i]; // 현재 번호
            string next = v[i + 1]; // 다음 번호
            if (cur.size() < next.size() && cur == next.substr(0, cur.size())) { 
                consistent = false; 
                break;
            }
        }
        if (aa) {
            cout << "YES\n";
        }
        else { 
            cout << "NO\n";
        }
    }
    return 0;
}

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 0;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n = 0;
        cin >> n;

        vector<string> phone(n);
        for (int j = 0; j < n; j++) {
            cin >> phone[j];
        }

        sort(phone.begin(), phone.end());

        int result = 0;
        for (int j = 0; j < n - 1; j++) {

            if (phone[j].length() > phone[j + 1].length())
                continue;

            
            if(phone[j] == phone[j + 1].substr(0, phone[j].length())) {
                result = 1;
                break;
            }
        }

        if (!result) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}

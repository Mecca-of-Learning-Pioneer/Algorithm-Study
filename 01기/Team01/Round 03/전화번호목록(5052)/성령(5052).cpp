#include <iostream>
#include <string>;
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 0, n = 0; // t는 테스트 케이스 개수, n은 전화번호 수
    string p1, p2, s; // p1는 긴급전화 번호
    bool r = false;

    cin >> t;

    for (int i = 0; i < t; i++) {

        cin >> n;
        cin >> p1;
        for (int i = 0; i < n - 1; i++) {
            cin >> p2;
            s = p2.substr(0, p1.length()); //접두사만 같으면 되니까
            if (s == p1) {
                r = true;
                break;
            }
            else
                r = false;
        }
        if (r == true)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}

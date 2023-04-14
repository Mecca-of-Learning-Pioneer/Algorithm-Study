#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // 입출력 속도 향상을 위한 코드
    cin.tie(NULL);
    cout.tie(NULL);

    int t; // 테스트 케이스의 개수
    cin >> t;
    while (t--) {
        int n; // 전화번호의 개수
        cin >> n;
        vector<string> v(n); // 전화번호 목록을 저장할 벡터
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end()); // 전화번호 목록을 사전순으로 정렬하기
        bool consistent = true; // 일관성 여부를 저장할 변수 초기화하기
        for (int i = 0; i < n - 1; i++) {
            string cur = v[i]; // 현재 번호
            string next = v[i + 1]; // 다음 번호
            if (cur.size() < next.size() && cur == next.substr(0, cur.size())) { // 현재 번호가 다음 번호의 접두어라면
                consistent = false; // 일관성이 없다고 표시하고 반복문 종료하기
                break;
            }
        }
        if (consistent) { // 일관성이 있다면
            cout << "YES\n";
        }
        else { // 일관성이 없다면
            cout << "NO\n";
        }
    }
    return 0;
}

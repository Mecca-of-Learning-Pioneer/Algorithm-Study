#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <stack>
#define endl '\n'
using namespace std;

// 마지막 원판을 빼고 나머지를 다 2번에 옮겨야 함
// 위 규칙을 재귀적으로 짠 것

void go(int n, int start, int mid, int end) {
    if (n == 1) {
        cout << start << " " << end << "\n";
        return;
    }
    go(n - 1, start, end, mid);
    cout << start << " " << end << "\n";
    go(n - 1, mid, start, end);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    go(n, 1, 2, 3);
    return 0;
}
//하노이탑 이동순서
#include <iostream>
using namespace std;

void hanoi(int n, int from, int to, int via) {
    if (n == 1) {
        cout << from << ' ' << to << '\n'; 
    }
    else {
        hanoi(n - 1, from, via, to); // n-1개의 원판을 출발지에서 경유지로 옮긴다.
        cout << from << ' ' << to << '\n'; // 마지막 원판을 출발지에서 목적지로 옮긴다.
        hanoi(n - 1, via, to, from); // n-1개의 원판을 경유지에서 목적지로 옮긴다
    }
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    hanoi(n, 1, 3, 2);
    return 0;
}
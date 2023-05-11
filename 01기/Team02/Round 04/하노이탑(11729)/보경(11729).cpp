#include <iostream>
#include <cmath>
#define endl "\n"
using namespace std;

void hanoi(int n, int start, int mid, int end) {
    if (n == 1)
        cout << start << " " << end << endl;
    else {
        hanoi(n - 1, start, end, mid);
        cout << start << " " << end << endl;
        hanoi(n - 1, mid, start, end);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    cout << int(pow(2, N)) - 1 << endl;
    hanoi(N, 1, 2, 3);
}

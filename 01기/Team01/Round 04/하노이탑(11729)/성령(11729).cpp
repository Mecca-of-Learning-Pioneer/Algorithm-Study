#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int start, int goal, int assist) {

    if (n == 1) {
        cout << start << " " << goal << '\n';
    }

    else {
        hanoi(n - 1, start, assist, goal);
        cout << start << " " << goal << '\n';
        hanoi(n-1, assist, goal, start);
    }
}

    
int main(){

    int N = 0;
    cin >> N;
    cout << int(pow(2, N)) - 1 << '\n'; // 특정 값의 제곱을 구하기 위해서는 pow 함수 사용, *pow는 double형을 반환
    hanoi(N, 1, 3, 2);

}

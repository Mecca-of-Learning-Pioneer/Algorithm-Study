#include<iostream>
#include<cmath>
#include<algorithm>
#define endl '\n'
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    //입력값 받기 & 오름차순 정렬

    cout << arr[(n - 1) / 2];


    return 0;
}

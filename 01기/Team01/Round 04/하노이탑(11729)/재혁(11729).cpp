#include<iostream>
#include<memory>
#define endl '\n'
using namespace std;

int arr[21];


void move_right(int &n) {
    cout << n << " ";
    n += 1;
    if (n == 4)n = 1;
    cout << n << endl;
}

void move_left(int &n) {
    cout << n << " ";
    n -= 1;
    if (n == 0)n = 3;
    cout << n << endl;
}

void Moving_even(int &n) {
    n--;
    if (n > 0) {
        Moving_even(n);
    }
    if (n % 2 == 1) {
        move_right(arr[n]);
    }
    else {
        move_left(arr[n]);
    }
    if (n > 0) {
        Moving_even(n);
    }
    n++;
}

void Moving_odd(int& n) {
    n--;
    if (n > 0) {
        Moving_odd(n);
    }
    if (n % 2 == 1) {
        move_left(arr[n]);
    }
    else {
        move_right(arr[n]);
    }
    if (n > 0) {
        Moving_odd(n);
    }
    n++;
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    fill_n(arr, 21, 1);
    if (n % 2 == 0) {
        Moving_odd(n);
    }
    else {
        Moving_even(n);
    }




    return 0;
}

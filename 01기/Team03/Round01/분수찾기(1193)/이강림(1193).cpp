#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    int n = 1;
    // �밢���� ��ȣ�� ã�´�. 
    while (n * (n + 1) / 2 < X) {
        n++;
    }
    int a = X - n * (n - 1) / 2; // X��° �м��� ���� 
    int b = n + 1 - a; // X��° �м��� �и� 
    if (n % 2 == 0) {
        cout << a << "/" << b << endl; //¦�� �� �� 
    } else {
        cout << b << "/" << a << endl; //Ȧ�� �� �� 
    }
    return 0;
}

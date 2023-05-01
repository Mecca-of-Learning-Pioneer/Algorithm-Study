#include <iostream>
#include <algorithm>
#pragma warning (disable:4996)
using namespace std;

int main() {
    

    int n = 0;
    scanf("%d", &n);
    int* arr = new int[n]; //집의 개수를 모르므로 동적할당 

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr + n); // 입력을 5 1 7 9 이런 식으로 받을 수도 있기 때문

    if (n % 2 == 1)
        printf("%d", arr[(n - 1) / 2]);
    else
        printf("%d", arr[n / 2 - 1]);

    delete[] arr;

}

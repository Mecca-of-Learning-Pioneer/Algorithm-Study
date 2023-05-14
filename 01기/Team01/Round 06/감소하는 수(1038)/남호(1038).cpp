#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <long long> reyq;
int n = 0, cnt = 0;


int main() {


    cin >> n;
    if (n > 1022) {
        cout << -1 << endl;
        return 0;
    }
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 1; i <= 9; i++) {
        reyq.push_back(i);
        cnt++;
    }
    

    for(int i=0;i<reyq.size();i++) {
        if (cnt >= n)
            break;
        long long n = reyq[i];
        
        for (int i = 0; i <= 9; i++) {
            if (n % 10 > i){
                reyq.push_back(n * 10 + i);
                cnt++;
            }
            
        }

    }
    cout << reyq[n-1] << endl;
    return 0;

}

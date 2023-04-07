#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n; 
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i]; 
    }

    cin >> m; 
    vector<int> nums(m);
    for (int i = 0; i < m; i++) {
        cin >> nums[i]; 
    }

    
    vector<int> count(10001, 0);

    for (int i = 0; i < n; i++) {
        count[cards[i]]++;
    }

   
    for (int i = 0; i < m; i++) {
        cout << count[nums[i]] << ' ';
    }

    return 0;
}

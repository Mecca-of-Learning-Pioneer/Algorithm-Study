#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;  

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int M, N = 0;
	
	cin >> M;
	vector<int> total(M);
	
	for(int i = 0; i < M; i ++) {
		cin >> total[i];
	}
	
	sort(total.begin(), total.end());
	cin >> N;
	
	int temp = 0;
	int count = 0;
	vector<int>::iterator lower, upper;
	for(int i = 0; i < N; i ++) {
		cin >> temp;
		lower = lower_bound(total.begin(), total.end(), temp);
    	upper = upper_bound(total.begin(), total.end(), temp);
    	cout << upper - lower << ' ';
		// temp = to_string(temp);
	}

	
}

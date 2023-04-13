#include<iostream>
#include<vector>
#include<algorithm>
#define endl "\n"

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N = 0;
	cin >> N;

	vector<int> vec;
	int num = 0;

	for (int i = 0; i < N; i++) {
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());
	int w = (N - 1) / 2;
	int where = vec[w];

	cout << where << endl;


}

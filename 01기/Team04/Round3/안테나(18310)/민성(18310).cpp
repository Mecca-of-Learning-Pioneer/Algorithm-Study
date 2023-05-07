#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;

int N;
int arr[200005];
int ans;

void solve() {
	sort(arr, arr + N);
	ans = arr[(N - 1) / 2];
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	solve();
	cout << ans << '\n';

	return 0;
}
#include<iostream>
#include<map>
#define endl "\n"

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N = 0;
	map<int, int> map;
	int value = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> value;
		map[value]++;
	}

	int M = 0;
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> value;
		cout << map[value] << " ";
	}
	cout << endl;

}

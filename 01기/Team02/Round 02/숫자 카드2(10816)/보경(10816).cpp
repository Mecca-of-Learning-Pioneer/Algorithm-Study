#include<iostream>
#include<map>

using namespace std;

int main() {
	int N = 0;
	map<int,int> map;
	int value = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> value;
		map[value] = i;
	}

	int M = 0;
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> value;
		cout << map.count(value) << " ";
	}
	cout << endl;

}

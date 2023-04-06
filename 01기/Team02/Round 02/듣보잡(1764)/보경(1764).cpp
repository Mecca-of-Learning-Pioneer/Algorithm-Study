#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N = 0, M = 0;
	cin >> N >> M;
	set<string> h;
	vector<string> hs;
	string name = "";
	for (int i = 0; i < N; i++) {
		cin >> name;
		h.insert(name);
	}
	for (int i = 0; i < M; i++) {
		cin >> name;
		if (h.find(name) != h.end())
			hs.push_back(name);
	}

	sort(hs.begin(), hs.end());
	cout << hs.size() << endl;
	for (int i = 0; i < hs.size(); i++)
		cout << hs[i] << endl;

}

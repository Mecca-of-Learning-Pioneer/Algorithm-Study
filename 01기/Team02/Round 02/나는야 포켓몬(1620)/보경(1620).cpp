#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	int N = 0, M = 0;
	string name1 = "";
	map<int, string> num_na;
	map<string, int> name_nu;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> name1;
		num_na[i] = name1;
		name_nu[name1] = i;
	}

	for (int a = 0; a < M; a++) {
		string value = "";
		cin >> value;
		if (value[0] <'A') {
			int i = stoi(value);
			cout << num_na[i] << endl;
		}
		else {
			cout << name_nu[value] << endl;
		}
	}
}

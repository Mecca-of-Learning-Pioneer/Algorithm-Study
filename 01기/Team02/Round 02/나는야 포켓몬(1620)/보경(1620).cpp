#include<iostream>
#include<string>
#include<map>
#define endl "\n"

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	int N = 0, M = 0;
	string name1 = "";
	map<int, string> num_na;
	map<string, int> name_nu;
	cin >> N >> M;
	for (int i = 1; i < N+1; i++) {
		cin >> name1;
		num_na[i] = name1;
		name_nu[name1] = i;
	}

	for (int a = 0; a < M; a++) {
		string value = "";
		cin >> value;
		if (isdigit(value[0]) != 0) {
			int i = stoi(value);
			cout << num_na[i] << endl;
		}
		else {
			cout << name_nu[value] << endl;
		}
	}
}

#include<iostream>
#include<set>
using namespace std;

int main() {
	set<int> A;
	set<int> A1;
	set<int> B;
	set<int>::iterator c;
	set<int>::iterator have;

	int a = 0, b = 0;
	cin >> a >> b;
	int num = 0;
	for (int i = 0; i < a; i++) {
		cin >> num;
		A.insert(num);
		A1.insert(num);
	}
	for (int i = 0; i < b; i++) {
		cin >> num;
		B.insert(num);
	}

	for (c = B.begin(); c != B.end(); c++) {
		have = A.find(*c);
		if (have == A.end()) {
			continue;
		}
		else {
			A.erase(have);
		}
	}

	for (c = A1.begin(); c != A1.end(); c++) {
		have = B.find(*c);
		if (have == B.end()) {
			continue;
		}
		else {
			B.erase(have);
		}
	}
	cout << A.size() + B.size() << endl;
}

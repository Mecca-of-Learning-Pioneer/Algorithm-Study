#include<iostream>
#define endl '\n'
using namespace std;

void output(int x, int y, int num) {
	
	if ((x / num) % 3 == 1 && (y / num) % 3 == 1) {
		cout << ' ';
	}
	else {
		if (num / 3 == 0) {
			cout << "*";
		}
		else {
			output(x, y, num/3);
		}
	}
}


int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
		output(i, k, N);
		}
		cout << "\n";
	}




	return 0;
}

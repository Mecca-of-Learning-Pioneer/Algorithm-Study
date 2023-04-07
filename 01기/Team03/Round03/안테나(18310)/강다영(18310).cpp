#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int N = 0;
	int l = 0;
	int i = 0;
	
	cin >> N;

	int a[N] = {0, };

	for(i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	
	sort(a, a + N);

	cout << a[((N - 1) / 2)];
}

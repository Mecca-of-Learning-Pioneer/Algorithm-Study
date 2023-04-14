#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	
	int N;
	cin >> N;
	
	vector<int> arr(N+1);
	
	for(int i=0; i<N; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end());
		
	if(N%2 == 0)
	{
		cout << arr[N/2];
	}
	else
	{
		cout << arr[N/2+1];
	}
		
	return 0;
}

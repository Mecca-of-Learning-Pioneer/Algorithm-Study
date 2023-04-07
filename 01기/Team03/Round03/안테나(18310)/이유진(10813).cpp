#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
	//시간초과를 해결해준다.  
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int N;
	cin >> N; 
	vector<int> home; 
	 
	//입력받을 집의 개수. 
	for(int i=0; i<N; i++)
	{
		int input;
		cin >> input; 
		home.push_back(input);
	} 
	//벡터를 이용해 정렬해준다. 
	sort(home.begin(), home.end()); 
	
	if(N%2==0) cout << home[(N - 2) / 2];
	
	else cout << home[(N - 1) / 2];

}

// 틀림
#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t, n;
	string emergency; 
	string num;
	cin >> t;
	vector<int> answer(t);
	
	for(int i = 0; i < t; i++)
	{
		cin >> n;
		cin >> emergency;	// 긴급전화  
		 
		vector<string> arr(n);
		
		for(int j = 0; j < n-1; j++)
		{
			cin >> arr[j];	// 전화번호 목록  
			
		}
		
		sort(arr.begin(),arr.end());
		
		for(int j = 0; j < n-1; j++)
		{
			if(arr[j].find(emergency) == string::npos)	// 일관성이 있는 목록  
			{
				answer[i] = 0;
			}
			else	// 일관성이 없는 목록  
			{
				answer[i] = 1;
				break;
			}
		}
		arr.clear(); 
	}
	
	for(int i = 0; i < t; i++)
	{
		if(answer[i] == 1)	// 일관성이 없는 목록  
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
	
	return 0;
	
}

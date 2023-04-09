#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 0;
	int n = 0;
	vector<string> N;
	string InputNum;
	int i = 0;
	int j = 0;
	
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		for(i = 0; i < n; i++)
		{
			cin >> InputNum;
			N.push_back(InputNum);
		}
		sort(N.begin(), N.end());
		
		bool check = true;

		for(i = 1; i < n; i++)
		{
			string front = N[i - 1];
			string back = N[i];
			
			
			string tmp = "";
			
			for(j = 0; j < front.size(); j++)
			{
				tmp += back[j];
			}
			if (front == tmp)
			{
	    	    check = false;
	    	    break;
			}
		}
		if(check)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		N.clear();
	}
	return 0;
}

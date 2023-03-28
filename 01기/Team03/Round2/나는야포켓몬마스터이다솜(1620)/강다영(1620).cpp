#include<iostream>
#include<string>
#include<map>
#include<cctype>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0;
	int M = 0;
	string tmp;
	string dogam[100001];
	int i = 0;
	int j = 0;
	
	cin >> N >> M;
	
	map<string, int> m;
	
	for(i = 0; i < N; i++)
	{
		cin >> tmp;
		m.insert(make_pair(tmp, i + 1));
		dogam[i + 1] = tmp;
	}
	
	for(i = 0; i < M; i++)
	{
		cin >> tmp;
		
		if(isdigit(tmp[0]))
		{
			cout << dogam[stoi(tmp)] << "\n";
		}

        else 
        {
        	cout << m.find(tmp)->second << "\n";
		}
	}
}

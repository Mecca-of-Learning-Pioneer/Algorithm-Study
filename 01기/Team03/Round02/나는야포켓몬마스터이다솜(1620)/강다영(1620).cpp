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
	string name;
	string dogam[100001];
	int i = 0;
	int j = 0;
	
	cin >> N >> M;
	
	map<string, int> m;
	
	for(i = 0; i < N; i++)
	{
		cin >> name;
		m.insert(make_pair(name, i + 1));
		dogam[i + 1] = name;
	}
	
	for(i = 0; i < M; i++)
	{
		cin >> name;
		
		if(isdigit(name[0]))
		{
			cout << dogam[stoi(name)] << "\n";
		}

        else 
        {
        	cout << m.find(name)->second << "\n";
		}
	}
}

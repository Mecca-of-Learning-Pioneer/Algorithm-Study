#include <iostream>
#include <set>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	string name;
	
	int j = 0;
	
	set<string> name_list;
	vector<string> answer;
	
	int count = 0;
	
	for(int i = 0; i < N; i++)
	{
		cin >> name;
		name_list.insert(name);
	}
	
	for(int i = 0; i < M; i++)
	{
		cin >> name;
		
		if(name_list.find(name) != name_list.end())
		{
			answer.push_back(name);
			count++;
		}
	}
	
	sort(answer.begin(), answer.end());
	
	cout << count << endl;
		
	for(int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << endl;
	}
	
	
	return 0;
}

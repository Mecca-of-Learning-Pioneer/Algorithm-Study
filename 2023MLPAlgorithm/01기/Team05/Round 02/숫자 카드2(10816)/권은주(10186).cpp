#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int N, M;
	int num; 

	cin >> N;
	
	map<int, int> card;
		
	for (int i = 0; i < N; i++)	
	{
		cin >> num;
		card[num]++;
	}
		
	cin >> M;
	
	map<int, int> answer;
		
	for (int i = 0; i < M; i++)	
	{
		cin >> num;
		if(card.find(num) != card.end())
		{
			cout << card[num] << " ";
		}
		else
		{
			cout << 0 << " ";
		}
	}
	
}

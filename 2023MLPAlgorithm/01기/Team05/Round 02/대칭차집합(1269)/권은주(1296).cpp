#include <iostream>
#include<algorithm>
#include <set>
#include <map>
using namespace std;

int main()
{
	int N, M, num;
	cin >> N >> M;

	map<int, int> A;
	map<int, int> B;
	map<int, int> answer_A;
	map<int, int> answer_B;

	for(int i = 0; i < N; i++)
	{
		cin >> num;
		A.insert({i, num});
		answer_A.insert({i, num});
	}

	for(int i = 0; i < M; i++)
	{
		cin >> num;
		B.insert({i, num});
		answer_B.insert({i, num});
	}
	
	for(int i = 0; i < M; i++)
	{
		num = B[i]-1;
		if(answer_A.find(num) != answer_A.end())
		{
			answer_A.erase(num); // A - B
		}
	}
	
	
	for(int i = 0; i < N; i++)
	{
		num = A[i]-1;
		if(answer_B.find(num) != answer_B.end())
		{
			answer_B.erase(num); // B - A 
		}
	}

	cout << answer_A.size() +  answer_B.size();
	
	return 0;
}

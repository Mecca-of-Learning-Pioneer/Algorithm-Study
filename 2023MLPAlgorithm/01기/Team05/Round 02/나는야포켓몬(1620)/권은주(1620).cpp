// -----시간초과-----
#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M;
	
	string pokemon;
	string question;

	int i_answer = 0;
	int count = 0;

	cin >> N >> M;
	
	map<int, string> dic1;
	map<string, int> dic2;
	
	for (int i = 0; i < N; i++)	// 도감에 수록되어 있는 포켓몬
	{
		cin >> pokemon;
		dic1.insert(make_pair(i,pokemon));	// dic1
		dic2.insert(make_pair(pokemon,i));	// dic2
	}	// 포켓몬 사전에 넣기 성공 ^_^ Vv 
	
	for (int i = 0; i < M; i++)
	{
		cin >> question; //  질문 받기!
		
		if(isdigit(question[0]) != 0) // 숫자인지 확인  
		{	// 숫자(i -> pokemon)
			// dic1에서 찾아야함! 
			cout << dic1[stoi(question)-1] << endl;	
		}
		else
		{	// 문자열(pokemon -> i)
			// dic2에서 찾아야함! 
			cout << dic2[question] + 1 << endl;
		}
	}
	
	return 0;
}

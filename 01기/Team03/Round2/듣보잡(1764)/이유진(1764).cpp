#include <iostream>
#include <algorithm>
#include <map> 
#include <cctype>
#include <string>
using namespace std;
string Name[100];
string Name2[100];

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL);//시간초과 방지	 
	map<string, bool>NOPE;     //NOPE 맵 정의 
	vector<string>answer;  //듣도보도 못한 맵  

	int Nh, Ns, i;  
	string Input; 
	
	cin >> Nh >> Ns;
	
	//들은적없는   
	for(i=0; i<Nh; i++)
	{
		cin >> Name[i];
		NOPE.insert({Name[i], true});   
	}
	//본적 없는 
	for(i=Nh; i<Nh+Ns; i++)
	{
		cin >> Name2[i];
		
		if(NOPE[Name2[i]]!=0)  //false가 아니면 안에 값이 있음ㄴ있음녀 답지맵에 저장     
		{
			answer.push_back(Name2[i]);  
		}
		else
		{
		NOPE.insert({Name[i], true});
		}
	}
	sort(answer.begin(), answer.end());
	cout << answer.size() <<"\n";
	
	
	for(i=Nh; i<answer.size()+Nh; i++)
	{
		cout << Name2[i]<<"\n";
	}
	
	return 0;
	
   }




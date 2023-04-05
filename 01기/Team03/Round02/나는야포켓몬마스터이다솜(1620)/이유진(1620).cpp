#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <map> 
using namespace std;

string Pocketmon[100000];   

int main()
{	cin.tie(0);      //시간초과해결  
	ios::sync_with_stdio(0);    //시간초과 해결
	
	map<string, int>mapset;    //map함수를 선언한다.   
	int N, M;
	string Input; //입력받는 이름  
	int InputNum;  //입력받는 숫자  
	  
	cin >> N >> M;   //N과 M을 입력 받는다.
	
	for(int i=0; i < N; i++)
	{ 
		cin >> Pocketmon[i];  //N번 돌아가면서 포켓몬 이름을 받는다.  
		mapset.insert({Pocketmon[i], i});
	} 
	
	for(int i=0; i<M; i++)
	{		
		cin >> Input;       //어떤값을 입력받는다.
		//1.포켓몬 숫자  >> 포켓몬이름   
		if(isdigit(Input[0]) != 0)
		{
			InputNum=stoi(Input)-1;
			cout <<Pocketmon[InputNum]<<"\n"; 
		} 
		//2.포켓몬이름  >> 포켓몬숫자  
		else
		{
			auto index = mapset.find(Input);
			cout << index-> second+1<<"\n";               
		}
	} 
	return 0;
}


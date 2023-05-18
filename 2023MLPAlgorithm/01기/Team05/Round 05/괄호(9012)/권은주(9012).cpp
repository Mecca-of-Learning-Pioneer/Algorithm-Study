#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <vector>
using namespace std;
stack<char> stacks;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int T;
	cin >> T;
	cin.ignore();
	
	string str;

	for(int i=0; i<T; i++)
	{
		int key = 0;
   		getline(cin, str);
 		
		for(int j=0; j<str.length(); j++)
		{
			if(str[j] == '(')
			{
				stacks.push('(');
			}
			else
			{
				if(stacks.empty())
				{
					cout << "NO" << endl;
					key = -1;
					break;
				}
				else
				{
					stacks.pop();
				}
			}
		}
		
		if(key != -1)
		{
			if(stacks.empty())
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
		
		
		// 스택 비우기  
		while(!stacks.empty())
		{
			stacks.pop();
		}
		
	}

}

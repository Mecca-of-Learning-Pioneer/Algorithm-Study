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
	vector<vector<string>> words;
	string word;

	for(int i=0; i<T; i++)
	{
   		getline(cin, str);
 		str += ' ';
 		
		for(int j=0; j<str.length(); j++)
		{
			if(str[j]==' ')
			{
				while(!stacks.empty())
				{
					cout << stacks.top();
					stacks.pop();
				}
				cout << " ";
			}
			else
			{
				stacks.push(str[j]);
			}
		}
		
		cout << endl;

	}
}

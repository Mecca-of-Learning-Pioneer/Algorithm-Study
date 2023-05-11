#include <iostream>
#define endl "\n"

using namespace std;

void recursive_star_function(int i, int j, int n)
{
	if((i/n)%3 == 1 && (j/n)%3 == 1)
	{
		cout << " ";
	}
	else
	{
		if(n/3 == 0)
		{
			cout << "*";
		}
		else
		{
			recursive_star_function(i,j,n/3);
		}
	}

}


int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int N;
	cin >> N;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			recursive_star_function(i,j,N);
		}
		cout << endl;
	}

	return 0;
	
}

#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input; 

	int k = 1;
	while (1) //��� ���ο� �ִ��� ã��  
	{		
		if ((k-1)*(k)/2 < input && input <= (k)*(k+1)/2)
		{
			break;
		}
		k++;
	}

	if (k % 2 != 0) // k�� Ȧ���� ��
	{
		int a = k*(k + 1) / 2;
		cout << a-input + 1<<'/'<<k -(a -input);
	}
	else //k�� ¦�� �� ��
	{
		int a = k * (k + 1) / 2;
		cout <<k-(a-input) <<'/'<<a-input + 1;

	}
	return 0;
}

 

 



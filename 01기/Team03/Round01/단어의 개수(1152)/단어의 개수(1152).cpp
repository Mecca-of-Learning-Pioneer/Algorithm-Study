#include <iostream>
#include <string> //getline() ����ϱ����� ���̺귯�� ���� 
using namespace std;

int main() {
	
	string str;
	int cnt = 1; 
	
	getline(cin, str); // getline()�� ���� �Է°��� string�� �ִ´�.
	 
	if (str[0] == ' ') // ���ڿ��� �����̳� ���� ������ ������, �������� �����Ѵ�. 
	{
		cnt--;	
	} 
    
    if(str[str.length() - 1] == ' ') // ����,�� �Ѵ� ������ �� �Ѵ� ������ϴ� ���� üũ�Ѵ�.
    {
        cnt--;	
    }
	
	
	for (int i = 0; i < str.length(); i++) 
	{
		if (str[i] == ' ') // string�� ���̸�ŭ for���� ���� ' '�� ���ö����� ������ ���Ѵ�. 
			cnt++;
	}

	
	cout << cnt;
}

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int count =1;
	char MyString[50]; 
	
	cin.getline (MyString, 50);   //�����Է¹ޱ�.
	
	//ó���� ���鸸 �ָ��� ���´�. 
	if(MyString[0]==' '){
		count=0;
	}
	
	for (int i = 0; i < 20; i++) // �˻� ����
	{
		if (MyString[i] == ' ')
		{
			count++; // ����  ����
		}
	}
	if (MyString[strlen(MyString)-1] == ' ')//�������� ���� (���) 
	{
		count--; // ����  ����
	}
	cout << count; // ����  ���
	

}






#include<iostream>
using namespace std;
int a[100][100];  //��ȭ���� �迭�� ������ Ǯ���  
int main(){
    int paper,x,y,cnt=0;
    cin>>paper;   //���� �� ���ִ��� �Է�
	  
    while(paper--){
    	
        cin>>x>>y; //�����Է¹ް�, ���� �Է¹ޱ�  
        for(int i=y; i<y+10; i++){  //������ �ϳ��� 10�̱� ������,  
        	
            for(int j=x; j<x+10; j++){
            	
                if(!a[i][j]){    
                    cnt++; 
                   a[i][j]=1;
                }
            }
        }
    }
    cout<<cnt;
}


#include <stdio.h>

int main(void){
    int N,M,i,j;
    scanf("%d %d", &N, &M);  //n,m�Է�  
    int arr[N+1];          // �迭�� ����  
    for(int k=1;k<N+1;k++){
        arr[k]=k;  // �迭 ������� ä���  
    }
    for(int k=0;k<M;k++){
        scanf("%d %d",&i,&j);  //i j�� �ݺ����ȿ��� �Է�    
        int num=0;
        
        for(int k= j;k>=i;k--){   //�ٲ�ġ��  
            num=arr[i];
            arr[i]=arr[k];
            arr[k]=num;
            
            i++;
             
        }
    }
    for(int k=1;k<N+1;k++){
        printf("%d ",arr[k]);
    }
}



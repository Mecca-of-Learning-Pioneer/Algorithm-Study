#include <iostream>
#include <string>
#include <unordered_map> // �� �����ӵ��� ���� unordered_map ���̺귯��  


using namespace std;


int main(){
	
		cout.tie(NULL); 
		cin.tie(NULL);
    	ios_base::sync_with_stdio(false);	//������ �ð� �ʰ�
    	
	
		unordered_map <string, int> dic;
		
		int N,M;
		string name; 
		
		cin >> N >> M;
		
		string strArr[100000]; // ��ȣ�� �ԷµǾ����� ����� �迭 
		
		for(int i = 1; i < N + 1; i++){
			cin >> name;
			dic.insert(make_pair(name,i));
			strArr[i] = name;
		}
		
		for(int i = 0; i < M; i++){
			
			string find_poketmon; 
			cin >> find_poketmon;
			
			 if(dic.find(find_poketmon)!=dic.end()){
			 	
				 	//�̸��� �Է��ϸ� map ����
            		cout << dic.find(find_poketmon)->second << "\n";
            		
       		}
       		 
       	 	else{
       	 		
           		int num = stoi(find_poketmon); //��ȣ�� �Է��� ��쿡�� �迭 ����
           		
          	  	cout << strArr[num] << "\n";
          	  	
       		 }
       		 	
			
		}
	
	return 0;
}



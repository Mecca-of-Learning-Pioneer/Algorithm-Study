#include <iostream>
#include <string>
#include <unordered_map> // 더 빠른속도를 위한 unordered_map 라이브러리  


using namespace std;


int main(){
	
		cout.tie(NULL); 
		cin.tie(NULL);
    	ios_base::sync_with_stdio(false);	//없으면 시간 초과
    	
	
		unordered_map <string, int> dic;
		
		int N,M;
		string name; 
		
		cin >> N >> M;
		
		string strArr[100000]; // 번호가 입력되었을때 사용할 배열 
		
		for(int i = 1; i < N + 1; i++){
			cin >> name;
			dic.insert(make_pair(name,i));
			strArr[i] = name;
		}
		
		for(int i = 0; i < M; i++){
			
			string find_poketmon; 
			cin >> find_poketmon;
			
			 if(dic.find(find_poketmon)!=dic.end()){
			 	
				 	//이름을 입력하면 map 참조
            		cout << dic.find(find_poketmon)->second << "\n";
            		
       		}
       		 
       	 	else{
       	 		
           		int num = stoi(find_poketmon); //번호를 입력한 경우에는 배열 참조
           		
          	  	cout << strArr[num] << "\n";
          	  	
       		 }
       		 	
			
		}
	
	return 0;
}



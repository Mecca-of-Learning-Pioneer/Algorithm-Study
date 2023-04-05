#include <iostream>
#include <vector> 
#include <algorithm>
#include <set> 

using namespace std;

int main(void) {

	cout.tie(NULL); 
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	//������ �ð� �ʰ�
	

	int N,M;
	
	set<string> not_listen;
	
	
	vector<string> result;
	
	cin >> N >> M;
	
	for(int i = 0; i < N ; i++){
		
		string name;
		cin >> name;
		not_listen.insert(name);
	}
		
	for(int i = 0; i < M; i++){
			
		string name1;
		cin >> name1;
		
		// ������ ���� ��� �̸� name1�� ������ ���� ��� ����Ʈ�� not_listen�� �� ��ġ�°� ������ ��� ���Ϳ� �߰� 
		if(not_listen.find(name1) != not_listen.end()){
			result.push_back(name1);
		}
    }
    
    cout << result.size() << '\n';
    
    // ���ĺ� ������� ��� �ϱ����� ���͸� ���Ľ����� 
    sort(result.begin(), result.end());
    
    for (int i = 0; i < result.size(); i++) {
        
        cout << result[i] << ' ';
    }
    	
	return 0; 
}

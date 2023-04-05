#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std;

int main(void) {

		cout.tie(NULL); 
		cin.tie(NULL);
    	ios_base::sync_with_stdio(false);	//������ �ð� �ʰ�
	
	int N, M;  
	
    cin >> N;
    
    vector<int> have_N(N); // �⺻�� 0���� �ʱ�ȭ�� N���� ���Ҹ� ������ vector v�� ���� 
    
    
    // ����̰� ������ �ִ� ���� ī�忡 �����ִ� ���� M �Է� 
     for (int i = 0; i < N; i++) { 
     	
     	int input_N;
     	cin >> input_N; 
        have_N[i] = input_N;  
        
    }
    
    cin >> M;

	vector<int> find_M(M);
	
	vector<int> result(M); // ����� ��� ���� 
	
	// ����̰� �� �� ������ �ִ� ����ī������ ���ϴ� ���� N �Է� 
    for (int i = 0; i < M; i++) {
    	
        int input_M;
     	cin >> input_M; 
        find_M[i] = input_M;  
    }
    
    // ����Ž���� �ϱ����� ���͸� ���Ľ����� 
    sort(have_N.begin(), have_N.end());
	
	
    
	
	for (int i = 0; i < M; i++) {
		
		int num = find_M[i];
        
         auto have_low = lower_bound(have_N.begin(), have_N.end(),num); // num���� ó�� ������ �ε����� ��ȯ 
         auto have_high = upper_bound(have_N.begin(), have_N.end(),num);// num�� �ʰ��ϴ� ���� ó�� ������ �ε����� ��ȯ 
         
         result[i] = have_high - have_low; // �ʰ��� - ó�� ���°� = �ߺ��Ǵ� ������ ������ ���´�, �̰��� ��� ���Ϳ� �־��ش�. 
    }
	
 	// ��� �� ���� ��� 
    for (int i = 0; i < M; i++) {
        
        cout << result[i] << ' ';
    }
    
    return 0;
	
}



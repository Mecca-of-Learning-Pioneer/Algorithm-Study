#include <iostream>
#include <vector>
#include <algorithm> // set_difference() �Լ� ��� 

using namespace std;

// �������� ���ϴ� �Լ� 
vector<int> Difference_Func(vector<int> &v1, vector<int> &v2){
	
	//set_difference()�� ���ĵ� ���տ��� �������� ���ϱ⶧���� ���͵��� ���Ľ��Ѿ� �� 
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	
	vector<int> buff(v1.size() + v2.size());
    auto iter = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), buff.begin());
    buff.erase(iter, buff.end());
    
    return buff;
}

int main(){
	
	int A, B; 
	
    cin >> A >> B;
    
    vector<int> A_v(A);  
    vector<int> B_v(B);
    
   	int result = 0;
   
    for(int i = 0; i < A ; i++){
    	int input_A;
    	cin >> input_A; 
    	A_v[i] = input_A;
	}
	
	for(int i = 0; i < B ; i++){
    	int input_B;
    	cin >> input_B; 
    	B_v[i] = input_B;
	}
	
  
  // Difference_Func()���� ���� ������ 2���� size�� ���ϱ� 
  result = Difference_Func(A_v,B_v).size() + Difference_Func(B_v,A_v).size();
  
  cout << result;

	
	return 0;
}




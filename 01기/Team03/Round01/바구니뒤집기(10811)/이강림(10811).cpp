#include <iostream>
#include <vector> // vector�� ����ϱ����� ���̺귯�� ���� 
#include <algorithm> // reverse() �Լ��� ����ϱ����� ���̺귯�� ���� 

using namespace std;

int main(void) {

	
	int N, M; // ù��° ���� �ٱ��� ������ ����Ƚ��  
	
    cin >> N >> M;
    
    vector<int> v(N+1); // �⺻�� 0���� �ʱ�ȭ�� 5���� ���Ҹ� ������ vector v�� ���� 
    
     for (int i = 1; i <= N; i++) {
        v[i] = i; // �ٱ��� ������ŭ �ݺ����� ���� �� ��ҿ� �� ���� 
    }

    for (int i = 0; i < M; i++) {
        int min, max; 
		cin >> min >> max;
		reverse(v.begin() + min,v.begin() + max + 1); 
    }

    for (int i = 1; i < v.size(); i++) {
        
        cout << v[i] << ' ';
    }
	
}

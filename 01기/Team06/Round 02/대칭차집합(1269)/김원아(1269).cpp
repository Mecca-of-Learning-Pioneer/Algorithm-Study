#include <iostream>
#include <algorithm>
#include <set>

using namespace std;  

int main(void) {
	
	int N = 0;
	int M = 0;
	int temp = 0;
	set<int> A;
	set<int> B;
	
	
	cin >> N >> M;

	for(int i = 0; i < N; i++) {
		cin >> temp;
		A.insert(temp);
	}
	for(int i = 0; i < M; i++) {
		cin >> temp;
		B.insert(temp);
	}
	
	vector<int> result;
    result.resize(A.size()+B.size());//공간확보
    
    auto itr = set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), result.begin());
    result.erase(itr, result.end());//남은공간 제거
    cout << result.end() - result.begin();
	
	
}

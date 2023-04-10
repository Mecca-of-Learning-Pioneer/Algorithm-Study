#include <iostream>
#include<cstdlib>
#include <vector> 
#include <algorithm>

using namespace std;

int main(void) {
	
	cout.tie(NULL); 
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);	
	
	int N,M,idx;
	
	//int result = 99999;
	
	cin >> N;
	
	vector<int> home(N);
	
	for(int i = 0; i<N; i++){
		
		cin >> M;
		home[i] = M;
	
	}
	
	sort(home.begin(),home.end());
	
	/*for(int i = 0; i < N; i++){
		int temp = 0; // 임시값 저장 
	
		for(int j = 0; j < N; j++){
			
			temp += abs(home[i] - home[j]); // 모든 집 사이 거리를 체크해서 temp값에 넣음 
		}
		
		// temp 총합이 result값보다 작으면 = 최소 거리이면 
		if(temp < result)
		{
			result = temp; // temp값을 result값에 넣는다. 
			idx = home[i]; // 그리고 그 값을 idx에서 출력한다. 
		}
		
	}*/
	
	// 만약 제일 왼쪽집부터 시작하면 오른쪽으로 갈수록 제일 왼쪽에 있는 집을 제외하면 거리가 줄어든다.
	// 그러다가 중간지점을 넘는 순간부터 왼쪽의 집이 오른쪽의 집보다 많아져서 거리의 총합이 증가한다.
	// 그래서 결론은 home 벡터의 중간지점이 최소 거리값을 가진다.  
	idx = home[((home.size() -1) / 2)];

	cout << idx;
	
	
	return 0;
}

#include <iostream>            //컨테이너 또는 배열에서 할당된 경계를 넘어가는 접근 발생
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M, m, count;
    
    
    cin >> N;
    vector<int>values(N);
    
    for(int i=0; i < N; i++)  cin >> values[i];  //N개의 숫자를 받는다.  
	
	sort(values.begin(), values.end());  //오름차순으로 정렬한다.  
	 
	cin >> M;       
	
	for(int i=0; i<M; i++)
	{
		cin >> m;
		count = std::count(values.begin(), values.end(), m);      //count함수 알고리즘헤더에서 정의:  
		cout << count<<" ";
	}
 
    return 0;
}

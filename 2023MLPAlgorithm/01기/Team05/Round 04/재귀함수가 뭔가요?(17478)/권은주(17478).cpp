#include <iostream>
#define endl "\n"
using namespace std;

// 함수 선언
void line_function(int num) {
	if(num == 0)
	{
	}
	else
	{
		for(int i=0; i<num; i++)
		{
			cout << "____";
		}
	}
}

void recursive_function(int num, int N) {
	
	line_function(num);
	cout << "\"재귀함수가 뭔가요?\"" << endl;
	line_function(num);
    cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << endl;
    line_function(num);
	cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << endl;
	line_function(num);
	cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << endl;
	
    // 종료 조건
    if (num == N-1) {
    	line_function(num+1);
    	cout << "\"재귀함수가 뭔가요?\"" << endl;
    	line_function(num+1);
    	cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << endl;
    	line_function(num+1);
        cout << "라고 답변하였지." << endl;
        return;
    }
	
    // 재귀 호출
    recursive_function(num+1, N);
    
    line_function(num+1);
        cout << "라고 답변하였지." << endl;
        
}

int main()
{
	int N;
	cin >> N;
	
	cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl; 
	
	recursive_function(0,N);
	
	cout << "라고 답변하였지." << endl;
}

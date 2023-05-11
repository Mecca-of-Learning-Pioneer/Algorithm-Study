#include<iostream>
#define endl "\n"

using namespace std;

void re(int b,int c) {
	string w;
	for (int a = 0; a < c; a++) {
		w += "____";
	}
	if (b == 0) {
		cout << w << "\"재귀함수가 뭔가요?\"" << endl;
		cout << w << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << endl;
		return;
	}
	else {
		cout << w << "\"재귀함수가 뭔가요?\"" << endl;
		cout << w << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << endl;
		cout << w << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << endl;
		cout << w<< "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << endl;
		re(b - 1,c+1);
	}
}

void fi(int c) {
	string w;
	for (int a = c; a > 0; a--)
		w += "____";
	cout << w << "라고 답변하였지." << endl;
	if (c != 0)
		fi(c - 1);
	return;
}

int main() {
	cin.tie(0); 
	cout.tie(0);
	
	int N = 0;
	cin >> N;
	cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl;
	re(N,0);
	fi(N);

}

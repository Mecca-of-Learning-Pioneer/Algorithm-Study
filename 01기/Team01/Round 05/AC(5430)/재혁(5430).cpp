#include<iostream>
#include<string>
#include<sstream>
#include<deque>
#define endl '\n'
using namespace std;

struct AC {
	string cmd;
	long num;
	deque<string> data;
};

void input_arr(AC& x);	//데이터 입력
void execute(AC& x);	//함수 계산

int main()
{
	int N;
	cin >> N;

	for(int i = 0; i< N; i++){
		AC test;
		cin >> test.cmd >> test.num;
		input_arr(test);
		execute(test);
		cout << endl;
		N--;
	}
	
	return 0;
}

void execute(AC& x) {
	bool tr = false;	//앞뒤 판별 변수
	for (int i = 0; i < x.cmd.length(); i++) {
		//R이 들어오면 앞뒤 전환
		if (x.cmd[i] == 'R') {
			tr = !tr;
			continue;
		}

		//D를 입력받고 x.data의 크기가 작으면 오류발생
		if (x.cmd[i] =='D' && x.data.size() <= 0) {
			cout << "error";
			return;
		}

		//입력값 D계산
		if (tr)x.data.pop_back();
		else x.data.pop_front();
	}

	cout << "[";
	if (tr) {	//뒤에서 부터 출력
		for (auto k = x.data.rbegin(); k != x.data.rend(); k++) {
			if (k == --x.data.rend()) { cout << *k; }
			else cout << *k << ",";
		}
	}
	else {		//앞에서 부터 출력
		for (auto k : x.data) {
			if (k == *--x.data.end()) { cout << k; }
			else cout << k << ",";
		}
	}
	cout << "]";
}



void input_arr(AC& x) {
	string tmp_data;	//가공할 데이터 버퍼
	cin >> tmp_data;	//입력받기
	tmp_data.pop_back();//뒤 대괄호 자르기
	tmp_data.erase(0, 1);//앞 대괄호 자르기
	tmp_data.shrink_to_fit();	//배열 크기 알맞게 줄이기
	stringstream ss(tmp_data);	//가공된 데이터를 입력값으로 전환
	string tmp;					//getline버퍼
	while (getline(ss, tmp, ',')) {	//입력값을  ,기준으로 tmp에 하나씩 입력
		x.data.push_back(tmp);	//x의 deque에 데이터 입력
	}
}
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

void input_arr(AC& x);	//������ �Է�
void execute(AC& x);	//�Լ� ���

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
	bool tr = false;	//�յ� �Ǻ� ����
	for (int i = 0; i < x.cmd.length(); i++) {
		//R�� ������ �յ� ��ȯ
		if (x.cmd[i] == 'R') {
			tr = !tr;
			continue;
		}

		//D�� �Է¹ް� x.data�� ũ�Ⱑ ������ �����߻�
		if (x.cmd[i] =='D' && x.data.size() <= 0) {
			cout << "error";
			return;
		}

		//�Է°� D���
		if (tr)x.data.pop_back();
		else x.data.pop_front();
	}

	cout << "[";
	if (tr) {	//�ڿ��� ���� ���
		for (auto k = x.data.rbegin(); k != x.data.rend(); k++) {
			if (k == --x.data.rend()) { cout << *k; }
			else cout << *k << ",";
		}
	}
	else {		//�տ��� ���� ���
		for (auto k : x.data) {
			if (k == *--x.data.end()) { cout << k; }
			else cout << k << ",";
		}
	}
	cout << "]";
}



void input_arr(AC& x) {
	string tmp_data;	//������ ������ ����
	cin >> tmp_data;	//�Է¹ޱ�
	tmp_data.pop_back();//�� ���ȣ �ڸ���
	tmp_data.erase(0, 1);//�� ���ȣ �ڸ���
	tmp_data.shrink_to_fit();	//�迭 ũ�� �˸°� ���̱�
	stringstream ss(tmp_data);	//������ �����͸� �Է°����� ��ȯ
	string tmp;					//getline����
	while (getline(ss, tmp, ',')) {	//�Է°���  ,�������� tmp�� �ϳ��� �Է�
		x.data.push_back(tmp);	//x�� deque�� ������ �Է�
	}
}
#include <iostream>
#include <map>
#include <vector>
#include <sstream>
using namespace std;

int main() {
	map<string, double> score = {
		{"A+",4.5}, {"A0",4.0},{"B+", 3.5},{"B0",3.0},
		{"C+",2.5}, {"C0",2.0},{"D+", 1.5},{"D0",1.0},
		{"F",0.0}
	};

	string str, spl;
	vector<string>sub;
	
	double hap = 0; 
	double hap_score = 0;
	
	for (int i = 0; i < 20; i++) {
		getline (cin, str);
		stringstream ss(str);
		while (getline(ss, spl, ' ')) {
			sub.push_back(spl); //sub vector�� �߰� 
		}
		if (sub[2] == "P") {
			sub.clear();
			continue;
		}
		else { //stod() -> string�� douvle�� ����ȯ 
			hap_score += stod(sub[1]);
			hap += stod(sub[1]) * score[sub[2]];
			sub.clear();
		}
	}
	cout<<fixed;
	cout.precision(6); // �Ҽ��� �ڸ� �����ڸ����� �� 6���� ���� 
	cout << hap / hap_score;
	return 0;
}

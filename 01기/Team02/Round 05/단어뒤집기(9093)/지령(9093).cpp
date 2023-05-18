#include <iostream>
#include<stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int num;
	cin >> num;
	
	string str;
	stack <char> st;

	cin.ignore(); //버퍼 비우기

	while (num--) {
		getline(cin, str);
		str += ' '; //연산의 편의를 위해 마지막에 공백

		for (int i = 0; i < str.size(); i++) {

			if (str[i] == ' ') {  //공백일 때

				while (!st.empty()) { //스택에 있는 내용을 전부 출력
					cout << st.top();
					st.pop();
				}cout << ' ';
			}
			else {  //문자일 때
				st.push(str[i]); //스택에 추가
			}
		}cout << endl;
		
	}
	return 0;
}
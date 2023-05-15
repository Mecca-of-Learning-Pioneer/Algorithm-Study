#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool Check(string str) {
    stack<char> st;

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];

        if (c == '(') {
            st.push(str[i]); //여는 괄호면 일단 스택에 넣고
        }
        else {
            if (!st.empty()) { //닫는 괄호면 비었는지 체크 후 안비었다면 여는 괄호를 하나 빼준다
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    return st.empty(); //비었으면 true를 반환 아니면 false반환
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (Check(str)) { cout << "YES" << endl; } // 따라서 YES or NO를 출력함
        else { cout << "NO" << endl; }
    }
    return 0;
}
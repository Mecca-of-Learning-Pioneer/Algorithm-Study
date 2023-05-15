#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool Check(string str) {
    stack<char> st;

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];

        if (c == '(') {
            st.push(str[i]); //���� ��ȣ�� �ϴ� ���ÿ� �ְ�
        }
        else {
            if (!st.empty()) { //�ݴ� ��ȣ�� ������� üũ �� �Ⱥ���ٸ� ���� ��ȣ�� �ϳ� ���ش�
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    return st.empty(); //������� true�� ��ȯ �ƴϸ� false��ȯ
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (Check(str)) { cout << "YES" << endl; } // ���� YES or NO�� �����
        else { cout << "NO" << endl; }
    }
    return 0;
}
#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
#include<sstream>
#define endl '\n'
using namespace std;



int main() {

    //ios::sync_with_stdio(false);
    //cin.tie(0);

    int n; cin >> n;
    cin.ignore();   //cin�Է¹��ۿ� �ִ� ���๮�� ����
    for (int i = 0; i < n; i++) {
        //���������� ���� �Է¹ޱ�
        string word;
        getline(cin, word);

        //��ü�� �Ųٷ� �ٲٱ�
        reverse(word.begin(), word.end());

        //�ٲ� �ܾ ���ÿ� �־��ֱ�
        stack<string> result;
        stringstream ss(word);
        string tmp;
        while (getline(ss, tmp, ' ')) {
            result.push(tmp);
        }

        //���ÿ� �־��� �ִ� �ܾ ���
        while (!result.empty()) {
            cout << result.top() << " ";
            result.pop();
        }
        cout << endl;
    }



    return 0;
}

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
    cin.ignore();   //cin입력버퍼에 있는 개행문자 비우기
    for (int i = 0; i < n; i++) {
        //띄워쓰기까지 문장 입력받기
        string word;
        getline(cin, word);

        //전체를 거꾸로 바꾸기
        reverse(word.begin(), word.end());

        //바꾼 단어를 스택에 넣어주기
        stack<string> result;
        stringstream ss(word);
        string tmp;
        while (getline(ss, tmp, ' ')) {
            result.push(tmp);
        }

        //스택에 넣어져 있는 단어를 출력
        while (!result.empty()) {
            cout << result.top() << " ";
            result.pop();
        }
        cout << endl;
    }



    return 0;
}

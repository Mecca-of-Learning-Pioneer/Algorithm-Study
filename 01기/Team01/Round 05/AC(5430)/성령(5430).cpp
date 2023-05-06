#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    string command;
    string arr;
    string b;

    cin.ignore();
    for (int i = 0; i < t; i++) {
        getline(cin, command); // 명령 받기
        cin.ignore();
        cin >> n;    // 배열 개수 입력
        getline(cin, arr); // 배열 입력


        for (int j = 0; j < command.size(); j++) {
            if (command[j] == 'R'){
                if (arr.size() != 0)
                    reverse(arr.begin() + 1, arr.end() - 1); // reverse할 때 '[' 와 ']'는 그대로 
                }

          
            else if (command[j] == 'D') {
                if (arr.size() == 3)    //arr에 [] 포함되어 있음
                    arr.erase(arr.begin()+1); // arr.erase(1)하면 첫번째 인덱스부터 끝까지 삭제됨
                
                else if (arr.size() > 3) 
                    arr.erase(1, 2);
                

                else {
                    b = "error";
                    printf("error\n");
                    break;
                }

            } // command 'D'
            
        } // 명령어 for
        if (b != "error")
            cout << arr << endl;
        b = " ";
    } // 큰 for문

} // main

#pragma warning (disable: 4996)
#include <iostream>
#include <string>
#include <stack>
using namespace std;


int main() {

    stack<int>stack; // 파이썬과 다르게 list를 만들지 않고 stl 함수를 통해 따로 만들어야 함
    int n;
    cin >> n;
    string command;
    
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, command);

        if (command.substr(0,4) == "push") {
            stack.push(stoi(command.substr(5)));    // command[5] 하면 안 되는 이유가 예시에서 push 123 있었기때문에 인덱스 5부터 끝까지
        }

        else if (command == "pop") {
            if (!stack.empty()) {
                printf("%d\n", stack.top());
                stack.pop(); // 파이썬과 다르게 stack.pop()은 값을 반환하지 않아 top()을 통해 다른 변수에 저장한 뒤 출력해야 함
            }
            else
                printf("%d\n", -1);
        }

        else if (command == "size")
            printf("%d\n", stack.size());

            else if (command == "empty") {
                if (stack.empty())
                    printf("%d\n", 1);
                else
                    printf("%d\n", 0);
            }

            else if (command == "top") {
                if (stack.empty())
                    printf("%d\n", -1);

                else
                    printf("%d\n", stack.top());

            }
        }
 }

#include <iostream>
#include <stack>
#include <string>
#pragma warning (disable:4996)
using namespace std;


int main() {

    int t;
    scanf("%d", &t);
    stack<char>stack;
    string s;

    cin.ignore();
    for (int i = 0; i < t; i++) {
        getline(cin, s);

        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '(')
                stack.push(s[j]);

            else {
                if (!stack.empty())
                    stack.pop();
                else {
                    printf("NO\n");
                    printf("%d", j);
                    break;
                }
         
            }
        }

    }
}

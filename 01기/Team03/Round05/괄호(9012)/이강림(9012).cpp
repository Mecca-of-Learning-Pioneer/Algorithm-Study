//괄호
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void) {

    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<string> result(N); // 결과 출력용 벡터
    stack<char> word; // 괄호를 담을 스택

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        cin.ignore();

        for (int i = 0; i < str.length(); i++)
        {
            char input = str[i];
            switch (input)
            {
            case '(':
                word.push('(');
                break;

            case ')':

                // 스택 안이 비어있거나 가장 최근에 들어간 괄호가 '(' 아닐 시
                if (word.empty() || word.top() != '(')
                {
                    word.push(')');
                }

                else if (word.top() == '(') {
                    word.pop();
                }
                break;

            default:
                continue;
            }
        }

        if (word.empty())
        {
            result[i] = "YES";
        }
        else {
            result[i] = "NO";
        }

        while (!word.empty())
        {
            word.pop();
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}

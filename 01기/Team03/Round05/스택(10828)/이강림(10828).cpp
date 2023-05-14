//스택
#include <iostream>
#include <stack>
#include <algorithm> 

using namespace std;

int main(void) {

    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);	//없으면 시간 초과

    stack<int> my_stack;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string order;
        int push_num = -1;
     
        cin >> order;

        if (order == "push")
        {
            cin >> push_num;
            my_stack.push(push_num);
        }
        else if (order == "pop")
        {
            if (!my_stack.empty())
            {
                cout << my_stack.top() << endl;
                my_stack.pop();
            }
            else {
                cout << -1 << endl;
            }
            
        }
        else if (order == "size")
        {
            cout << my_stack.size() << endl;
        }
        else if (order == "empty")
        {
            if (!my_stack.empty())
            {
                cout << 0 << endl;
            }
            else {
                cout << 1 << endl;
            }
        }
        else if (order == "top")
        {
            if (!my_stack.empty())
            {
                cout << my_stack.top() << endl;
                
            }
            else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    int T;        //�׽�Ʈ ���̽�
    string sentence;    //���� (���� �ִ� 1000) �ܾ����: 20
    stack <char> st;    //�ܾ ������ ���� ����

    cin >> T;
    cin.ignore();    //���� ����
    while (T--)
    {
        getline(cin, sentence);
        sentence += ' ';

        for (int i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] == ' ')
            {
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }cout << ' ';
            }
            else
                st.push(sentence[i]);
        }cout << "\n";
    }

}
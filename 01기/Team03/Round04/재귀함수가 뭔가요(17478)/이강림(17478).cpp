// ����Լ��� ������?
#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std;

string first_str[4] = { "\"����Լ��� ������?\"" ,"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.","���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���."
,"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" };

string second_str[2] = { "\"����Լ��� ������?\"" ,"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" };

string last_str = "��� �亯�Ͽ���.";
int last_print(int k);
int recursion(int n, int k);

int main(void) {

    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);	//������ �ð� �ʰ�


    int total; // ����� ���ϴ� ��� Ƚ�� �Է�
    int current = 0; // ���Ƚ���� üũ�ϴ� ���� -> (���Ƚ�� * 4)��ŭ ���� �տ� _�� �ٿ����ϱ� ������
    cin >> total;

    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
    recursion(total, current);


    return 0;

}


int recursion(int n, int k) {

    // ���������� ���ڸ� ����� ���� "��� �亯�Ͽ���."�� ����ϱ����� last_print()�� ���ϰ����� �ش�.
    if (n == 0)
    {
        for (int i = 0; i < 2; i++)
        {
            // ����ٸ� for������ �߰���
            for (int j = 0; j < k * 4; j++)
            {
                cout << "_";
            }
            cout << second_str[i] << endl;
        }

        return last_print(k);
    }
    else {

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < k * 4; j++)
            {
                cout << "_";
            }
            cout << first_str[i] << endl;
        }

        return recursion(n - 1, k + 1);
    }

}

// "��� �亯�Ͽ���."�� �տ� ����ٰ� ������������ �پ������ ���� ����Լ��� ����� ó��
int last_print(int k) {

    if (k == 0)
    {
        cout << last_str << endl;
        return 0;
    }
 
 
    for (int j = 0; j < k * 4; j++)
    {
        cout << "_";
    }
    cout << last_str << endl;
    

    return last_print(k-1);
}




// 재귀함수가 뭔가요?
#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std;

string first_str[4] = { "\"재귀함수가 뭔가요?\"" ,"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.","마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지."
,"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" };

string second_str[2] = { "\"재귀함수가 뭔가요?\"" ,"\"재귀함수는 자기 자신을 호출하는 함수라네\"" };

string last_str = "라고 답변하였지.";
int last_print(int k);
int recursion(int n, int k);

int main(void) {

    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);	//없으면 시간 초과


    int total; // 출력을 원하는 재귀 횟수 입력
    int current = 0; // 재귀횟수를 체크하는 변수 -> (재귀횟수 * 4)만큼 문장 앞에 _를 붙여야하기 때문에
    cin >> total;

    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl;
    recursion(total, current);


    return 0;

}


int recursion(int n, int k) {

    // 마지막으로 문자를 출력한 이후 "라고 답변하였지."를 출력하기위해 last_print()를 리턴값으로 준다.
    if (n == 0)
    {
        for (int i = 0; i < 2; i++)
        {
            // 언더바를 for문으로 추가함
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

// "라고 답변하였지."는 앞에 언더바가 내림차순으로 줄어듬으로 따로 재귀함수를 만들어 처리
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




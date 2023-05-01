#include <iostream>
#include <string>
using namespace std;

string p;
int cnt = 0;

void repeat(int n) {

    if (n == 1) {
        cnt += 1;
        p.erase(p.begin(), p.end());
        for (int i = 0; i < 4 * cnt; i++) {
            p += '_';
        }
        cout << p << "\"재귀함수가 뭔가요?\"\n";
        cout << p << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
        cout << p << "라고 답변하였지.\n";
        --cnt;

        for (cnt; cnt >0; cnt--) {
            p.erase(p.begin(), p.end());
            for (int i = 0; i < 4 * cnt; i++) {
                p += '_';
            }
            cout << p << "라고 답변하였지.\n";

        }
        cout << "라고 답변하였지.\n";
    }

    else {
        cnt += 1;
        p.erase(p.begin(), p.end());
        for (int i = 0; i < 4 * cnt; i++) {
            p += '_';
        }
        cout << p << "\"재귀함수가 뭔가요?\"\n";
        cout << p << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
        cout << p << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
        cout << p << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
        repeat(n - 1);
    }
}

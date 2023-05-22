//단어뒤집기
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> 
#include <string>
#include <sstream>

using namespace std;

int main(void) {

    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);	

    string str, spl;
    vector<string> sub; // 문자열들을 자르기위한 변수와 벡터


    queue<string> word; // 문자들을 담을 큐
    

    int N;
    cin >> N;
    cin.ignore(); // 이것을 안넣으면 N입력을 받을 때 버퍼에 생긴 '\n'을 getline()함수가 읽어서 충돌이 생길 수 있어 방지하기위해 버퍼를 초기화시킨다.


    for (int i = 0; i < N; i++)
    {
        getline(cin, str);
        stringstream ss(str);
        while (getline(ss, spl, ' ')) {
            reverse(spl.begin(), spl.end());
            word.push(spl);
        }
        word.push("\t"); // 줄바꿈을 하기위해 절대로 입력값에 넣을 수 없는 개행문자를 큐에 넣음
    }


    while (!word.empty())
    {
        // 줄 바꿈해야하는지 체크
        if (word.front() == "\t")
        {
            word.pop(); // 있으면 개행문자 없애고 줄바꿈 한 뒤 다음 것 출력
            cout<< endl;
        }
        else {

            cout << word.front() << " ";
            word.pop();
        }
    }
    

    
    return 0;
}

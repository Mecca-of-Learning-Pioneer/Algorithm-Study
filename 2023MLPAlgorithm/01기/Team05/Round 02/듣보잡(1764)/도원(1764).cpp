#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); //입출력 속도 증가 - 시간초과 해결 
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<string> unheard(n); // 듣도 못한 사람
    vector<string> result; // 듣보잡 목록

    for (int i = 0; i < n; i++) {
        cin >> unheard[i];
    }

    sort(unheard.begin(), unheard.end()); // 듣도 못한 사람 목록 정렬

    string name;
    for (int i = 0; i < m; i++) {
        cin >> name;
        if (binary_search(unheard.begin(), unheard.end(), name)) {     // unheard 벡터에서 name이라는 문자열을 찾습니다.   begin & end 둘 ek unheard벡터의 시작과 끝을 알리는 반복자.
            result.push_back(name); // binary_search 함수는 찾은 경우 true를 반환하고, 그렇지 않은 경우 false를 반환
                                    // name이 unheard 벡터에 있다면 (true), 듣보잡 목록에 추가합니다. 그렇지 않으면 (false), 아무 작업도 하지 않습니다.             
        }
    }

    sort(result.begin(), result.end()); // 듣보잡 목록 정렬
    int size = result.size();

    cout << size << "\n";
    for (int i = 0; i < size; i++) {
        cout << result[i] << "\n"; // 듣보잡 목록 출력
    }

    return 0;
}

#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int n, c; // n: 집의 개수, c: 공유기의 개수
vector<int> house; // house: 집의 좌표를 저장하는 벡터

// 공유기를 설치할 수 있는지 판단하는 함수
bool possible(int dist) {
    int cnt = 1; // 공유기의 개수를 세는 변수
    int prev = house[0]; // 이전에 공유기를 설치한 집의 좌표
    for (int i = 1; i < n; i++) {
        if (house[i] - prev >= dist) { // 현재 집과 이전 집의 거리가 dist 이상이면
            cnt++; // 공유기를 설치하고
            prev = house[i]; // 이전 집을 갱신한다
        }
    }
    return cnt >= c; // 설치한 공유기의 개수가 c 이상이면 true, 아니면 false를 반환한다
}

int main() {
    ios_base::sync_with_stdio(false); // 입출력 속도 향상을 위한 코드
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        house.push_back(x); // 벡터에 집의 좌표를 삽입한다
    }

    sort(house.begin(), house.end()); // 벡터를 오름차순으로 정렬한다

    int left = 1; // 최소 거리
    int right = house[n - 1] - house[0]; // 최대 거리
    int ans = 0; // 정답을 저장할 변수

    while (left <= right) { // 이분 탐색을 수행한다
        int mid = (left + right) / 2; // 중간 거리
        if (possible(mid)) { // 공유기를 설치할 수 있으면
            ans = mid; // 정답을 갱신하고
            left = mid + 1; // 최소 거리를 증가시킨다
        }
        else { // 공유기를 설치할 수 없으면
            right = mid - 1; // 최대 거리를 감소시킨다
        }
    }

    cout << ans << endl; // 정답을 출력한다
    return 0;
}
